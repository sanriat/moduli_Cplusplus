/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:19:09 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/18 20:35:51 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructed" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    Animal::operator=(other);
    std::cout << "Cat assigned" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meowwww~" << std::endl;
}
