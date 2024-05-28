/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:34:03 by martorre          #+#    #+#             */
/*   Updated: 2024/05/28 16:57:15 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotoffdfgmy", "Bender");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
    try
    {
        Intern      intern1;
        Intern      intern2;
        AForm*      form;
        AForm*      form2;
        Bureaucrat  pep("pep", 37);

        form = intern1.makeForm("shrubbery", "Pep");
        form2 = intern2.makeForm("robotomy", "pep");

        std::cout << *form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
    return 0;
}