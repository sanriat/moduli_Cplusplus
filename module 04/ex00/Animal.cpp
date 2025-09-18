/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:09:08 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/18 20:31:33 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal copy constructed" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal assigned" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const{
    return type;  
}

void Animal::makeSound() const
{
    std::cout << "*Generic animal sound*" << std::endl;
}