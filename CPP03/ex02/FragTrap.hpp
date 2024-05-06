/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:33:44 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 13:23:55 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {	
    public:
		FragTrap();
		FragTrap( std::string );
		FragTrap( const FragTrap& );
		FragTrap	&operator=(const FragTrap &other);
		~FragTrap();
		void	highFivesGuys( void );
};