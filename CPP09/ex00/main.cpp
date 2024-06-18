/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:01:49 by martorre          #+#    #+#             */
/*   Updated: 2024/06/18 17:01:56 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int main( int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange exchange;
        exchange.loadFromFile(argv[1]);
    }
    else
        std::cerr << "usage: ./bitcoin [filename]" << std::endl;
        
}