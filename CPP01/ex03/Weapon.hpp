/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:58:09 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 16:45:59 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Weapon{
    private:
        std::string	_type;
		
		
    public:
		Weapon();
        Weapon(std::string);
        ~Weapon();
        const std::string&	getType();
        void		setType(std::string);
};