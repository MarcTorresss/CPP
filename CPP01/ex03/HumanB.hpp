/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:02:23 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 16:38:39 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string	_name;
        Weapon      _w;

    public:
        HumanB(std::string);
        ~HumanB();
        void        setWeapon(Weapon);
        void        attack();
};