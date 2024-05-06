/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:56:47 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 13:33:06 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("some"), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name): _name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout << "Constructor Name called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_AttackDamage = other._AttackDamage;
	this->_EnergyPoint = other._EnergyPoint;
	this->_HitPoint = other._HitPoint;
	this->_name = other._name;
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
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " don't have EnergyPoints or HitPoints " << std::endl;

}

void    ClapTrap::takeDamage( int amount)
{
	if (_EnergyPoint > 0 && _HitPoint > 0)
    {
        _HitPoint = _HitPoint - amount;
        std::cout << "ClapTrap " << _name << " receive " << amount << ", and now have " << _HitPoint << " points of damage!" << std::endl;
	}
    if ((_HitPoint - amount) <= 0)
    {
        std::cout << "ClapTrap " << _name << " Is dead!!! " << std::endl;
        _HitPoint = 0;
    }
}

void    ClapTrap::beRepaired( int amount )
{
    if (_EnergyPoint > 0 && _HitPoint > 0)
    {
        _EnergyPoint = _EnergyPoint - 1;
        _HitPoint = _HitPoint + amount;
        std::cout << "ClapTrap " << _name << " repair " << amount << ", and now have " << _HitPoint << " Hit points!" << std::endl;
    }
	else
		std::cout << "ClapTrap " << _name << " don't have EnergyPoints or HitPoints " << std::endl;
}