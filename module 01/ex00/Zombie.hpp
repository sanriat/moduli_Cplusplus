/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:47:17 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/23 14:50:26 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string &name);
        ~Zombie();
        void announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif