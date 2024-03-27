/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:57:39 by martorre          #+#    #+#             */
/*   Updated: 2024/03/27 11:23:23 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
                putchar(toupper(argv[i][j++]));
            i++;
        }
    }
}