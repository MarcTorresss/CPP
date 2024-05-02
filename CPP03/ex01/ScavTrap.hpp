/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:16:31 by martorre          #+#    #+#             */
/*   Updated: 2024/05/02 16:03:09 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {	
    public:
		ScavTrap();
		ScavTrap( std::string );
		ScavTrap( const ScavTrap& );
		ScavTrap	&operator=(const ScavTrap &other);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};