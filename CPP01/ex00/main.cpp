/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:34:17 by martorre          #+#    #+#             */
/*   Updated: 2024/03/27 17:48:13 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    {
        randomChump("Pepillo");
    }
    {
        Zombie *z = newZombie("Makelele");
        z->announce();
        delete z;
    }
}