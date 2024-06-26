/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:35:11 by martorre          #+#    #+#             */
/*   Updated: 2024/05/02 13:03:20 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    Pepito("Pepito");
    ClapTrap    Narcis("Narcis");

    Pepito.attack("Narcis");
    for(int i = 0; i < 10; i++)
        Narcis.attack("Pepito");
    Pepito.beRepaired(20);
    for(int i = 0; i < 10; i++)
        Pepito.takeDamage(2);
}