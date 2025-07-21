/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:37:59 by damoncad          #+#    #+#             */
/*   Updated: 2025/06/16 17:58:59 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./sed <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty())
    {
        std::cerr << "Error: s1 (string to replace) must not be empty." << std::endl;
        return 1;
    }
    replace(filename, s1, s2);
    return 0;
}