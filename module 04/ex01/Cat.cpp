/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:58:09 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/20 20:15:34 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Cat copy-constructed" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miao Miaaao!!" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return brain->getIdea(index);
}
