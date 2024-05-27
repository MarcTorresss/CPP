/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:38:53 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 17:05:41 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat	b1("pepito", 5);
        Bureaucrat	b3("marc", 150);
        Bureaucrat	b2("narcis", 68);

        Form		f1("Generalitat", 50, 70);
		Form		f2("institut", 10, 6);
		Form		f3("42", 78, 33);

		// b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);
		// f3.beSigned(b1);
		// f1.beSigned(b1);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
}