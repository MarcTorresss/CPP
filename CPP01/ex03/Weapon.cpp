/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:18:33 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 16:45:52 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	setType(type);
}

const std::string&	Weapon::getType()
{
	const	std::string& type = _type;
	return (type);
}

void	Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
    
}