/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:56:47 by martorre          #+#    #+#             */
/*   Updated: 2024/04/30 16:23:18 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(0), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const Claptrap &other )
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap	&operator=(const ClapTra &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_AttackDamage = other.getRawBits();
    return (*this);   
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoint > 0 && _HitPoint > 0)
    {
        _EnergyPoint = _EnergyPoint - 1;
        std::cout << "ClapTrap " << _name << " attacks " << _HitPoint << ", causing" << _AttackDamage << " points of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " receive " << amount << ", and now have = " << _AttackDamage << " points of damage!" << std::endl;

}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoint > 0 && _HitPoint > 0)
    {
        _EnergyPoint = _EnergyPoint - 1;
        _HitPoint = _HitPoint + amount;
        std::cout << "ClapTrap " << _name << " repair " << amount << ", and now have" << _HitPoint << " Hit points!" << std::endl;
    }
}