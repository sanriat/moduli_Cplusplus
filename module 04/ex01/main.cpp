/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:18:17 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/24 20:41:01 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n-- Sounds --" << std::endl;
    for (int i = 0; i < size; i++) {
        animals[i]->makeSound();
    }

    std::cout << "\n-- Deleting --" << std::endl;
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }

    std::cout << "\n-- Deep copy test --" << std::endl;
    Dog dog1;
    dog1.setIdea(0, "Chase the cat!");
    Dog dog2 = dog1; // copy constructor

    std::cout << "Dog1 idea[0]: " << dog1.getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getIdea(0) << std::endl;

    dog1.setIdea(0, "Eat the bone!");
    std::cout << "Dog1 idea[0] after change: " << dog1.getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0] after Dog1 change: " << dog2.getIdea(0) << std::endl;

    return 0;
}
