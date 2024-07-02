/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:33:57 by martorre          #+#    #+#             */
/*   Updated: 2024/07/02 17:34:10 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include "BitcoinExchange.hpp"
#include <limits.h>

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange&)
{

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    // if (this == &other)
    // 	return *this;
	(void) other;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{

}

bool operator<(const struct tm& t1, const struct tm& t2)
{
	if (t1.tm_year < t2.tm_year) return true;
    if (t1.tm_year > t2.tm_year) return false;

    // Then compare months
    if (t1.tm_mon < t2.tm_mon) return true;
    if (t1.tm_mon > t2.tm_mon) return false;
	
    // Finally compare days
    return t1.tm_mday < t2.tm_mday;
}

bool parseDateString(std::string& dateStr, struct tm &tm) {
    if (strptime(dateStr.c_str(), "%Y-%m-%d", &tm) == NULL)
        return false;
    return true;
}

bool BitcoinExchange::parseFileToMap(std::string& filename, std::map<struct tm, float>& dataMap)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
	{
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return false;
    }
    std::string line;
    bool success = true;
    while (std::getline(file, line))
	{
        std::istringstream iss(line);
        std::string dateStr;
        float value;
        // Leer la fecha, la coma y el valor
        if (!(std::getline(iss, dateStr, ',') && (iss >> value)))
		{
            std::cerr << "Error al leer la línea o formato incorrecto: " << line << std::endl;
            success = false;
        }
		else
		{
            // Convertir la fecha de string a struct tm
            struct tm timeDate;
            if (!parseDateString(dateStr, timeDate))
			{
                std::cerr << "Error: formato de fecha incorrecto para la fecha " << dateStr << std::endl;
                success = false;
            } else
                dataMap[timeDate] = value;
        }
    }
    // Imprimir el contenido del mapa para verificar
    // std::map<struct tm, float>::iterator it;
    // for (it = dataMap.begin(); it != dataMap.end(); ++it) {
    //     // Obtener la fecha (struct tm) y el valor (float)
    //     struct tm date = it->first;
    //     // float value = it->second;

    //     // Convertir la fecha (struct tm) a una cadena legible
    //     std::cout << date.tm_year + 1900 << "-" << date.tm_mon + 1 << "-" << date.tm_mday << " => " << it->second << std::endl;
    // }
	file.close();
    return success;
}

bool	BitcoinExchange::parseEleCalc(std::string& filename, std::map<struct tm, float>& dataMap)
{
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(infile, line))
	{
        std::istringstream iss(line);
        std::string dateStr;
        float value;

        // Leer la fecha, el carácter pipe '|' y el valor
        std::getline(iss, dateStr, '|');
        iss >> value;

        // Eliminar espacios en blanco alrededor de la fecha
        dateStr.erase(0, dateStr.find_first_not_of(' '));
        dateStr.erase(dateStr.find_last_not_of(' ') + 1);

        // Convertir la fecha de string a struct tm usando la función definida arriba
        struct tm timeDate;
        if (!parseDateString(dateStr, timeDate))
            std::cerr << "Error: bad input => " << dateStr << std::endl;
		else
			calculateValue(dataMap, timeDate, value);
    }
    infile.close();
    return true;
}

 std::string formatDate(const struct tm& date)
 {
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d", &date);
    return std::string(buffer);
}

bool BitcoinExchange::calculateValue(std::map<struct tm, float>& dataMap, struct tm date, float value)
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	if (value >= (float)INT_MAX)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}
	if (dataMap[date])
		std::cout << formatDate(date) << " => " << value << " = " << value * dataMap[date] << std::endl;
	else
	{
		std::map<struct tm, float>::iterator it;
		float valuecopy;
		for (it = dataMap.begin(); it != dataMap.end(); ++it)
		{
			if (it->first < date)
				valuecopy = it->second;
			else
				break;
		}
		std::cout << formatDate(date) << " => " << value << " = " << value * valuecopy << std::endl;
	}
    return true;
}
