/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damoncad <damoncad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:24:08 by damoncad          #+#    #+#             */
/*   Updated: 2025/09/23 21:11:15 by damoncad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " default constructed\n";
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructed\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name),
    _hitPoints(other._hitPoints), _energyPoints(other._energyPoints),
    _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap " << _name << " copy-constructed\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " copy-assigned\n";
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructed\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot attack\n";
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy, cannot attack\n";
        return;
    }
    --_energyPoints;
    std::cout << "ClapTrap " << _name << " attacks " << target
        << ", causing " << _attackDamage << " points of damage! "
        << "(" << _energyPoints << " energy left)\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already at 0 hit points.\n";
        return;
    }
    if (amount >= _hitPoints)
    {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount
            << " points of damage and is now dead.\n";
    }
    else
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount
            << " points of damage, " << _hitPoints << " hit points left.\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot be repaired\n";
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy, cannot be repaired\n";
        return;
    }
    --_energyPoints;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired by " << amount
        << " points, " << _hitPoints << " hit points now. "
        << "(" << _energyPoints << " energy left)\n";
}

std::string ClapTrap::getName() const { return _name; }
unsigned int ClapTrap::getHitPoints() const { return _hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return _energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }