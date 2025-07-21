/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:29:49 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/29 19:59:59 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "Hello, World!";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address held by ptr: " << stringPTR << std::endl;
    std::cout << "Memory address held by ref: " << &stringREF << std::endl;
    
    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by ptr: " << *stringPTR << std::endl;
    std::cout << "Value referenced by ref: " << stringREF << std::endl;

    return 0;
}
