/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:55:39 by martorre          #+#    #+#             */
/*   Updated: 2024/04/30 15:54:15 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class ClapTrap{
    private:
        int     _name;
        int		_HitPoint;
		int		_EnergyPoint;
		int		_AttackDamage;
				
    public:
		ClapTrap();
		ClapTrap( const Claptrap& );
		ClapTrap	&operator=(const ClapTra &other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};