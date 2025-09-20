/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:10:17 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/20 19:15:59 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy-constructed" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}