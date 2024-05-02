/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:55:39 by martorre          #+#    #+#             */
/*   Updated: 2024/05/02 15:53:53 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class ClapTrap{
    protected:
        std::string	_name;
        int			_HitPoint;
		int			_EnergyPoint;
		int			_AttackDamage;
				
    public:
		ClapTrap();
		ClapTrap( std::string );
		ClapTrap( const ClapTrap& );
		ClapTrap	&operator=(const ClapTrap &other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string	getName();
		int			getHitPoint();
		int			getEnergyPoint();
		int			getAttackDamage();
		void		setName( std::string );
		void		setHitPoint( int );
		void		setEnergyPoint( int );
		void		setAttackDamage( int );
};