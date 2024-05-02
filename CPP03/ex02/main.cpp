/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:35:11 by martorre          #+#    #+#             */
/*   Updated: 2024/05/02 17:14:18 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap    Pepito("Pepito");
    FragTrap    Narcis("Narcis");

    Pepito.attack("Narcis");
    for(int i = 0; i < 10; i++)
        Narcis.attack("Pepito");
    Pepito.beRepaired(20);
    for(int i = 0; i < 10; i++)
        Pepito.takeDamage(2);
    Pepito.highFivesGuys();
}