/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:13:35 by martorre          #+#    #+#             */
/*   Updated: 2024/04/02 13:52:35 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string opt[4] = {"debug","info","warning","error"};
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (opt[i] == level)
            break;
    }
    switch (i) {
     case 0:
         debug();
         break;
     case 1:
         info();
         break;
     case 2:
         warning();
         break;
     case 3:
         error();
         break;
     default:
         std::cout << "Opción no válida" << std::endl;
         break;
    }
}
Harl::~Harl(){}