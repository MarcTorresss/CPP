/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:34:03 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 17:29:40 by martorre         ###   ########.fr       */
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
        AForm                   *test;

        ESPABILA = new ShrubberyCreationForm();
        ShrubberyCreationForm   scf1;
        RobotomyRequestForm     rrf1;
        PresidentialPardonForm  ppf1;
        Bureaucrat              b3("marc", 110);
        test->beSigned(b3);
        test->execute(b3);
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
        rrf1.execute(b3);
        ppf1.execute(b3);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}