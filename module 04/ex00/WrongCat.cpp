/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:22:08 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/18 20:29:03 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructed" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    WrongAnimal::operator=(other);
    std::cout << "WrongCat assigned" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow!! (but wrong)" << std::endl;
}
