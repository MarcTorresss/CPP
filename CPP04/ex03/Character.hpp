/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:41:57 by martorre          #+#    #+#             */
/*   Updated: 2024/05/09 14:11:58 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdio.h>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        AMateria *  _invetory[4];
        std::string _name;
	public:
        Character();
        Character( std::string );
        Character( const Character& );
		Character	&operator=(const Character &other);
        ~Character();
		std::string	const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};