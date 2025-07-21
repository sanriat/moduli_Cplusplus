/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:41:42 by damoncad          #+#    #+#             */
/*   Updated: 2025/05/23 16:04:30 by damoncad         ###   ########.fr       */
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
        Zombie();
        Zombie(const std::string& name);
        ~Zombie();
        void announce() const;
        void setName(const std::string& newName);
};

Zombie* zombieHorde(int N, const std::string& name);

#endif