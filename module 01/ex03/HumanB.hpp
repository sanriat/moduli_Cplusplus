/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:22:42 by damoncad          #+#    #+#             */
/*   Updated: 2025/06/16 16:43:45 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(const std::string& name);
        ~HumanB();
        void setWeapon(Weapon& weapon);
        void attack() const;
};

# endif