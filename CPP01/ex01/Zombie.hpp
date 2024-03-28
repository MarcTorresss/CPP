/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:53:22 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 12:03:56 by martorre         ###   ########.fr       */
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
        void        setName(std::string);
};

Zombie* zombieHorde(int N, std::string name);