/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:17:26 by martorre          #+#    #+#             */
/*   Updated: 2024/03/27 12:03:44 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook   pb;

    do
    {
        std::cout << "What action would you do? ";
        getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        if (input == "add")
            pb.add();
        if (input == "search")
            pb.search();
    } while (input != "exit");
    return (0);    
}