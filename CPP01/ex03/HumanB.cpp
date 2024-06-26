/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:05:31 by martorre          #+#    #+#             */
/*   Updated: 2024/04/02 11:48:11 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _w = NULL;
}
void    HumanB::attack()
{
    if (_w)
        std::cout << _name << " attacks with their " << _w->getType() << std::endl;
    else
        std::cout << _name << "is unarmed." << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    _w = &w;
}

HumanB::~HumanB()
{

}