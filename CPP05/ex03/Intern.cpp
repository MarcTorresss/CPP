/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:50:33 by martorre          #+#    #+#             */
/*   Updated: 2024/05/28 16:20:03 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern( const Intern &other )
{
	*this = other;
}

Intern	&Intern::operator=(const Intern &other) 
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
	// this->_name = other._name;
    return (*this);   
}

AForm* Intern::createPresidential( std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomy( std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubbery( std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string nameForm, std::string targetForm)
{
	AForm	*newForm = NULL;
    std::string forms[3] = { "presidential","robotomy","shrubbery" };
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        if (forms[i] == nameForm)
            break;
    }
    switch (i) {
     case 0:
		std::cout << "Intern creates " << nameForm << " form for " << targetForm << std::endl;
    	return newForm = createPresidential( targetForm );
     case 1:
		std::cout << "Intern creates " << nameForm << " form for " << targetForm << std::endl;
		return newForm = createRobotomy( targetForm );
     case 2:
		std::cout << "Intern creates " << nameForm << " form for " << targetForm << std::endl;
		return newForm = createShrubbery( targetForm );
		break;
     default:
		throw Formnotfound();
		break;
    }
	return newForm;
}


Intern::~Intern()
{
	
}
