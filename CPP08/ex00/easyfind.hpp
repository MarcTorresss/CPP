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

template <typename T>
T*    easyfind(T *value, int find)
{
    for (int i = 0; value[i]; i++)
    {
        if (value[i] == find)
            return &value[i];
    }
    throw std::out_of_range("not found :(");
}