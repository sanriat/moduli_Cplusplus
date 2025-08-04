/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:30:26 by damoncad          #+#    #+#             */
/*   Updated: 2025/08/04 12:49:38 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    _value = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = other._value;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _value = other._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const
{
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt() const
{
    return _value >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &other) const{ return _value > other._value; }
bool Fixed::operator<(const Fixed &other) const{ return _value < other._value; }
bool Fixed::operator>=(const Fixed &other) const{ return _value >= other._value;}
bool Fixed::operator<=(const Fixed &other) const{ return _value <= other._value;}
bool Fixed::operator==(const Fixed &other) const{ return _value == other._value;}
bool Fixed::operator!=(const Fixed &other) const{ return _value != other._value;}

Fixed Fixed::operator+(const Fixed &other) const { return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed &other) const { return Fixed(this->toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed &other) const { return Fixed(this->toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed &other) const { return Fixed(this->toFloat() / other.toFloat()); }

