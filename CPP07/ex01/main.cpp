/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:14:59 by martorre          #+#    #+#             */
/*   Updated: 2024/06/10 16:47:05 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    // Example usage with an integer array
    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "Original array:" << std::endl;
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    std::cout << "After applying square function:" << std::endl;
    iter(intArray, 5, square<int>);
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    // Example usage with a double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Original array:" << std::endl;
    iter(doubleArray, 5, print<double>);
    std::cout << std::endl;

    std::cout << "After applying square function:" << std::endl;
    iter(doubleArray, 5, square<double>);
    iter(doubleArray, 5, print<double>);
    std::cout << std::endl;

    return 0;
}