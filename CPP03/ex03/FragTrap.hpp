/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:33:44 by martorre          #+#    #+#             */
/*   Updated: 2024/05/02 17:40:38 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {	
    public:
		FragTrap();
		FragTrap( std::string );
		FragTrap( const FragTrap& );
		FragTrap	&operator=(const FragTrap &other);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys( void );
};