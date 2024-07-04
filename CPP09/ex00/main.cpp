/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:01:49 by martorre          #+#    #+#             */
/*   Updated: 2024/07/04 15:33:20 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include "BitcoinExchange.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <input.txt>" << std::endl;
        return 1;
    }

    std::string inputFile = argv[1];
    std::string dataFile = "data.csv";
    std::map<struct tm, float> dataMap;
    BitcoinExchange exchange;

	if (!exchange.parseFileToMap(dataFile, dataMap))
        return 1;
    if (!exchange.parseEleCalc(inputFile, dataMap))
        return 1;

    return 0;
}

