/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:19:33 by martorre          #+#    #+#             */
/*   Updated: 2024/06/13 11:57:49 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::vector<int> vector;
    std::list<int> list;

    for (int i = 0; i < 10; i++)
    {
        vector.push_back(i);
        list.push_back(i);
    }
    try
    {
        easyfind(vector, 42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(vector, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(list, 42);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(list, 2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}