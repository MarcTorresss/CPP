/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:32:41 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 11:42:52 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class WrongAnimal{
    protected:
        std::string type;
				
    public:
		WrongAnimal();
		WrongAnimal( std::string );
		WrongAnimal( const WrongAnimal& );
		WrongAnimal	&operator=(const WrongAnimal &other);
		std::string	getType( void ) const;
		void	makeSound( void ) const;
		~WrongAnimal();
};