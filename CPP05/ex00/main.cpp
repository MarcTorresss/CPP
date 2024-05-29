/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:38:53 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 12:10:01 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b1("pepito", 150);
        b1.incrementGrade();
        std::cout << "Bureaucrat" << std::endl << "Name: " << b1.getName() << std::endl << "Grade: " << b1.getGrade() << std::endl;
        std::cout << b1 << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
}