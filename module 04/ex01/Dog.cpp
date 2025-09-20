/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:52:26 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/20 20:10:55 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Dog copy-constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof woofff!!" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return brain->getIdea(index);
}
