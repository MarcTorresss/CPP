/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:19:33 by martorre          #+#    #+#             */
/*   Updated: 2024/06/12 17:35:44 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int arrayints[] = {1,2,3,4,5,6,7,8,9,10,2};
    try
    {
        int *arry = easyfind(arrayints, 7);
        for (int i = 0; arry[i]; i++)
            std::cout << arry[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}