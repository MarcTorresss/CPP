/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:10:29 by martorre          #+#    #+#             */
/*   Updated: 2024/07/04 15:57:19 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>

void	start_deque(char **argv);
void	start_vector(char **argv);

template <typename T>
void    merge_insertion_sort(T& container, size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        int	key = container[i];
		int	j = i - 1;
		while (j >= 0 && container[j] > key)
		{
			container[j + 1] = container[j];
			j = j - 1; 
		}
		container[j + 1] = key;
    }
}

template <typename T>
void print_container(const T& container) {
    typename T::const_iterator it;
    for (it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void	print_time(std::clock_t start, T& container, char c)
{
	std::clock_t end = std::clock();
    // Calcular el tiempo de CPU transcurrido en segundos
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    // Convertir el tiempo transcurrido a microsegundos
    double elapsed_time_us = elapsed_time * 1e6;
    // Mostrar el tiempo transcurrido en el formato
	if (c == 'd')
    	std::cout << "Time to process a range of " << container.size() << " elements with std::deque : " << std::fixed << std::setprecision(5) << elapsed_time_us << " us" << std::endl;
	else
	    std::cout << "Time to process a range of " << container.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << elapsed_time_us << " us" << std::endl;

}