/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:08:48 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/18 20:29:13 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "---- Correct polymorphism ----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound(); // Cat sound
    j->makeSound(); // Dog sound
    meta->makeSound(); // Generic sound

    delete meta;
    delete j;
    delete i;

    std::cout << "\n---- Wrong polymorphism ----" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrong->getType() << std::endl;
    std::cout << wrongCat->getType() << std::endl;

    wrong->makeSound();     // generic
    wrongCat->makeSound();  // generic, not overridden

    delete wrong;
    delete wrongCat;

    return 0;
}
