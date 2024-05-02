/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:34 by martorre          #+#    #+#             */
/*   Updated: 2024/05/02 17:45:20 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Scav")
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    _AttackDamage = 30;
    _HitPoint = 100;
    _EnergyPoint = 100;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
    std::cout << "DiamondTrap Constructor Name called" << std::endl;
    _AttackDamage = 30;
    _HitPoint = 100;
    _EnergyPoint = 100;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap&   DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_AttackDamage = other._AttackDamage;
    this->_EnergyPoint = other._EnergyPoint;
    this->_HitPoint = other._HitPoint;
    this->_name = other._name;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void    DiamondTrap::whoAmi( void )
{
    std::cout << "DiamondTrap " << _name << " Give me five :)))" << std::endl;
}