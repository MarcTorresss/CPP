/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:37:13 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 12:53:58 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    //Create a ponter to the string
    std::string* stringPTR = &str;

    //Create a reference to the string
    std::string& stringREF = str;

    std::cout << "THE ADDRESS" << std::endl;
    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address of strPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of strREF: " << &stringREF << std::endl;

    std::cout << std::endl;
    
    std::cout << "THE VALUE" << std::endl;
    std::cout << "Memory address of str: " << str << std::endl;
    std::cout << "Memory address of strPTR: " << *stringPTR << std::endl;
    std::cout << "Memory address of strREF: " << stringREF << std::endl;

}