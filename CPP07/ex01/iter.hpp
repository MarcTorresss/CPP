/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:14:56 by martorre          #+#    #+#             */
/*   Updated: 2024/06/10 16:33:06 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename Func>
void    iter( T *array , int lenth , Func function )
{
    for (int i = 0; i < lenth; i++)
        function(array[i]);
}

template <typename T>
void    print(const T &value)
{
    std::cout << value << std::endl;
}

template <typename T>
void    square(T &value)
{
    value *= value;
}