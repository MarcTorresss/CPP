/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:07:26 by martorre          #+#    #+#             */
/*   Updated: 2024/03/27 17:42:15 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Zombie{
    private:
        std::string _name;
    
    public:
		Zombie();
        Zombie(std::string);
        ~Zombie();
        void        announce( void );
};

void        randomChump(std::string name);
Zombie*     newZombie(std::string name);
