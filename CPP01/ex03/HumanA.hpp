/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:09:54 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 16:35:49 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string	_name;
        Weapon      &_w;

    public:
        HumanA(std::string, Weapon&);
        ~HumanA();
        void        attack();
};