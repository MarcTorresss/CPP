/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:45:12 by martorre          #+#    #+#             */
/*   Updated: 2024/03/28 16:49:22 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void    replaceInFile(std::string filename, std::string s1, std::string s2)
{
    
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        replaceInFile(filename, s1, s2);
    }
}