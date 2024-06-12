/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:19:37 by martorre          #+#    #+#             */
/*   Updated: 2024/06/12 17:29:45 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template <typename T>
void    easyfind(T value, int find)
{
    if (std::find(value.begin(), value.end(), find) != value.end())
        std::cout << "founded!!! :)" << std::endl;
    else
        throw std::out_of_range("not found :(");
}