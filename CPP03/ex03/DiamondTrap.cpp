/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:34 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 13:03:34 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Diamond_clap_name")
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    _nameDiamond = "Diamond";
    _AttackDamage = 30;
    _HitPoint = 100;
    _EnergyPoint = 50;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap Constructor Name called" << std::endl;
    _nameDiamond = name;
    _AttackDamage = 30;
    _HitPoint = 100;
    _EnergyPoint = 50;
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
    this->_nameDiamond = other._nameDiamond;
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

void    DiamondTrap::whoAmI( void )
{
    std::cout << "I am " << _name << std::endl;
}