/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:34:03 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 12:25:01 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm   scf1;
        RobotomyRequestForm     rrf1;
        PresidentialPardonForm  ppf1;

        Bureaucrat              b3("marc", 110);

        ppf1.executeForm();
        std::cout << std::endl;
        rrf1.executeForm();
        std::cout << std::endl;
        scf1.executeForm();
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        ShrubberyCreationForm   scf1;
        RobotomyRequestForm     rrf1;
        PresidentialPardonForm  ppf1;

        Bureaucrat              b3("marc", 2);

        scf1.beSigned(b3);
        rrf1.beSigned(b3);
        ppf1.beSigned(b3);

        scf1.execute(b3);
        std::cout << std::endl;
        rrf1.execute(b3);
        std::cout << std::endl;
        ppf1.execute(b3);
        std::cout << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}