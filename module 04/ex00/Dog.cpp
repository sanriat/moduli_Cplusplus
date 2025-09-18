/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:18:52 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/18 19:24:51 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type="Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    Animal::operator=(other);
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!!" << std::endl;
}