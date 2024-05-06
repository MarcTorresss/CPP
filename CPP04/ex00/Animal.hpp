/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:32:41 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 18:00:21 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Animal{
    protected:
        std::string type;
				
    public:
		Animal();
		Animal( std::string );
		Animal( const Animal& );
		Animal	&operator=(const Animal &other);
		std::string	getType( void ) const;
		void	makeSound( void ) const;
		~Animal();
};