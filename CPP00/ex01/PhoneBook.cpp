/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:29:33 by martorre          #+#    #+#             */
/*   Updated: 2024/03/27 15:20:21 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//Constructor
PhoneBook::PhoneBook()
{
	qtt = 0;
}

int check_input(std::string input)
{
    for (int i = 0; input[i] != '\0'; ++i)
        if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n' && input[i] != '\r' 
            && input[i] != '\v' && input[i] != '\f')
            return (0);
    return (1);
}

void PhoneBook::add()
{
   	Contact tmp;
    std::string input;

    do
    {
        std::cout << "Add the first name: ";
        getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
    } while (check_input(input) != 0);
    tmp.setFN(input);
    do
    {
        std::cout << "Add the Second name: ";
        getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
    } while (check_input(input) != 0);
    tmp.setLN(input);
    do
    {
        std::cout << "Add the Nick Name: ";
        getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
    } while (check_input(input) != 0);
    tmp.setNN(input);
    do
    {
        std::cout << "Add the Phone Number: ";
        getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
    } while (check_input(input) != 0);
    tmp.setPN(input);
    do
    {
        std::cout << "Add the darkest Secret: ";
        getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
    } while (check_input(input) != 0);
    tmp.setDS(input);
    Listcontact[qtt%8] = tmp;
    qtt++;
}

void    PhoneBook::ft_print()
{
    // Imprimir encabezados
    std::cout << std::endl << std::endl;
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    // Imprimir separadores
    std::cout << std::right << std::setw(10) << "----------" << "|"
              << std::setw(10) << "----------" << "|"
              << std::setw(10) << "----------" << "|"
              << std::setw(10) << "----------" << "|" << std::endl;

    // Imprimir info de contacto
   for (int i = 0; i <8; ++i)
    {
        std::cout << std::right << std::setw(10) << i << "|";
        if (Listcontact[i].getFN().length() <= 9)
            std::cout << std::right << std::setw(10) << Listcontact[i].getFN().substr(0, 10) << "|";
        else
            std::cout << std::right << std::setw(9) << Listcontact[i].getFN().substr(0, 9) << ".|";
        if (Listcontact[i].getLN().length() <= 9)
            std::cout << std::right << std::setw(10) << Listcontact[i].getLN().substr(0, 10) << "|";
        else
            std::cout << std::right << std::setw(9) << Listcontact[i].getLN().substr(0, 9) << ".|";
        if (Listcontact[i].getNN().length() <= 9)
            std::cout << std::right << std::setw(10) << Listcontact[i].getNN().substr(0, 10) << "|" << std::endl;
        else
            std::cout << std::right << std::setw(9) << Listcontact[i].getNN().substr(0, 9) << ".|" << std::endl;
    }
}

void    PhoneBook::search()
{
    std::string option;

    ft_print();
    do
    {
        std::cout << std::endl << "Witch index I should display (0-7)?: ";
        std::getline(std::cin, option);
        if (std::cin.eof())
            exit(1);
		if (option.length() == 1 && option[0] - '0' < 8)
			break;
		else
			std::cout << "Invalid option" << std::endl;
	} while (1);

    int input = atoi(option.c_str());
    if (input >= 0 && input <= 7)
    {
        std::cout << std::endl << "Id:\t\t" << input << std::endl << "First Name:\t" 
        << Listcontact[input].getFN() << std::endl << "Last Name:\t" 
        << Listcontact[input].getLN() << std::endl << "Nick Name:\t" 
        << Listcontact[input].getNN() << std::endl << "Phone Number:\t" 
        << Listcontact[input].getPN() << std::endl << "Darkest Secret:\t" 
        << Listcontact[input].getDS()<< std::endl;
        std::cout << std::endl << std::endl;
    }
}
