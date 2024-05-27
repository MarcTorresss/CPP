/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:30:16 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 15:00:30 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("Pepito")
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other): _target(other._target)
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);   
}

void	ShrubberyCreationForm::executeForm( void ) const
{
	std::ofstream outputFile(_target + "_shrubbery");
	outputFile << "        *" << std::endl;
    outputFile << "       /_\\" << std::endl;
    outputFile << "      /_o_\\" << std::endl;
    outputFile << "     /_____\\ " << std::endl;
    outputFile << "    /_o_o_o_\\" << std::endl;
    outputFile << "   /_________\\" << std::endl;
    outputFile << "  /_o_______o_\\" << std::endl;
    outputFile << " /_____________\\" << std::endl;
    outputFile << "/_______o_______\\" << std::endl;
    outputFile << "       |||" << std::endl;
    outputFile << "       |||" << std::endl;
    outputFile << "       |||" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}