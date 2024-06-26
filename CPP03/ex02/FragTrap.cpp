/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:33:40 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 13:24:05 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Scav")
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    _AttackDamage = 30;
    _HitPoint = 100;
    _EnergyPoint = 100;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap Constructor Name called" << std::endl;
    _AttackDamage = 30;
    _HitPoint = 100;
    _EnergyPoint = 100;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = other;
}

FragTrap&   FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_AttackDamage = other._AttackDamage;
    this->_EnergyPoint = other._EnergyPoint;
    this->_HitPoint = other._HitPoint;
    this->_name = other._name;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << _name << " Give me five :)))" << std::endl;
}