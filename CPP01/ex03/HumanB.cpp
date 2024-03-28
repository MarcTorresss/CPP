/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:05:31 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 16:38:33 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
}
void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _w.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon w)
{
    _w = w;
}

HumanB::~HumanB()
{

}