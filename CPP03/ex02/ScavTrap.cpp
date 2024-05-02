/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:15:51 by martorre          #+#    #+#             */
/*   Updated: 2024/05/02 16:42:53 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Scav")
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    _AttackDamage = 20;
    _HitPoint = 100;
    _EnergyPoint = 50;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap Constructor Name called" << std::endl;
    _AttackDamage = 20;
    _HitPoint = 100;
    _EnergyPoint = 50;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_AttackDamage = other._AttackDamage;
    this->_EnergyPoint = other._EnergyPoint;
    this->_HitPoint = other._HitPoint;
    this->_name = other._name;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_EnergyPoint > 0 && _HitPoint > 0)
    {
        _EnergyPoint--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing" << _AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << _name << " can't attack. Not enough energy or hit points" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << "is now in Gate keeper mode";
}