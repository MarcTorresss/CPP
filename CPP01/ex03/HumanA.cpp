/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:08:45 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 16:32:21 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : _name(name), _w(w) {}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _w.getType() << std::endl;
}

HumanA::~HumanA()
{

}