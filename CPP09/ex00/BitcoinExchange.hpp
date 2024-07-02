/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:44:35 by martorre          #+#    #+#             */
/*   Updated: 2024/07/02 16:22:11 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

class BitcoinExchange{
    private:
    
    public:
		BitcoinExchange();
		BitcoinExchange( const BitcoinExchange& );
		BitcoinExchange	&operator=(const BitcoinExchange &other);
		bool	parseFileToMap(std::string& filename, std::map<struct tm, float>& dataMap);
		bool	parseEleCalc(std::string& filename, std::map<struct tm, float>& dataMap);
		bool	calculateValue(std::map<struct tm, float>& dataMap, struct tm date , float value );
		~BitcoinExchange();
};

bool operator<(const struct tm& loc1, const struct tm& loc2);
