/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:39:59 by martorre          #+#    #+#             */
/*   Updated: 2024/04/02 14:51:58 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std:: endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[ INFO ]" << std:: endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std:: endl;
    std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std:: endl;
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
     case 1:
         info();
     case 2:
         warning();
     case 3:
         error();
         break;
     default:
         std::cout << "Invalid option" << std::endl;
         break;
    }
}
Harl::~Harl(){}