/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:45:44 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/23 15:59:54 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int count = 5;
    Zombie* horde = zombieHorde(count, "Carlos");

    for (int i = 0; i < count; i++)
        horde[i].announce();

    delete[] horde;
    return 0;
}