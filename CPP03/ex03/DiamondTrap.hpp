/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:32 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 12:33:13 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_nameDiamond;
    public:
		DiamondTrap();
		DiamondTrap( std::string );
		DiamondTrap( const DiamondTrap& );
		DiamondTrap	&operator=(const DiamondTrap &other);
		~DiamondTrap();
		void    whoAmI();
};