/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:22 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 11:57:48 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{		
    public:
		WrongCat();
		WrongCat( std::string );
		WrongCat( const WrongCat& );
		WrongCat	&operator=(const WrongCat &other);
		void	makeSound() const;
		~WrongCat();
};