/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:22:30 by damoncad          #+#    #+#             */
/*   Updated: 2025/06/16 16:43:14 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
#include <iostream>

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA(const std::string& name, Weapon& weapon);
        ~HumanA();
        void attack() const;
};

#endif