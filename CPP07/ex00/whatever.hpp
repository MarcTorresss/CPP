/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:29:41 by martorre          #+#    #+#             */
/*   Updated: 2024/06/10 16:23:39 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	swap( T& arg1, T& arg2 )
{
	T temp = arg2;

	arg2 = arg1;
	arg1 = temp;
}

template <typename T>
T	max( T arg1, T arg2 )
{
	if (arg1 > arg2)
		return arg1;
	return arg2;
}

template <typename T>
T	min( T arg1, T arg2 )
{
	if (arg1 < arg2)
		return arg2;
	return arg2;
}
