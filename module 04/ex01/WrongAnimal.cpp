/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:11:20 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/18 20:16:37 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    std::cout << "WrongAnimal copy constructed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal assigned" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "*Wrong generic animal sound*" << std::endl;
}
