/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:04:04 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/20 20:09:35 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
    std::cout << "Animal constructed with type: " << type << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copy-constructed" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    std::cout <<"Animal copy-assigned" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Generic animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
