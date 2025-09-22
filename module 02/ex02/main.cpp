/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:30:08 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/22 20:22:25 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}


/*
int main(void) {
    std::cout << "=== TEST OPERATORI DI CONFRONTO ===" << std::endl;
    Fixed a(5.5f);
    Fixed b(10.2f);
    Fixed c(5.5f);
    
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a == c: " << (a == c) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    
    std::cout << "\n=== TEST OPERATORI ARITMETICI ===" << std::endl;
    Fixed sum = a + b;
    Fixed diff = b - a;
    Fixed mult = a * Fixed(2);
    Fixed div = b / Fixed(2);
    
    std::cout << "a + b = " << sum << std::endl;
    std::cout << "b - a = " << diff << std::endl;
    std::cout << "a * 2 = " << mult << std::endl;
    std::cout << "b / 2 = " << div << std::endl;
    
    std::cout << "\n=== TEST INCREMENTO/DECREMENTO ===" << std::endl;
    Fixed x(3.14f);
    std::cout << "x iniziale: " << x << std::endl;
    std::cout << "++x: " << ++x << std::endl;
    std::cout << "x++: " << x++ << std::endl;
    std::cout << "x dopo x++: " << x << std::endl;
    std::cout << "--x: " << --x << std::endl;
    std::cout << "x--: " << x-- << std::endl;
    std::cout << "x finale: " << x << std::endl;
    
    std::cout << "\n=== TEST MIN/MAX ===" << std::endl;
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    
    return 0;
}*/