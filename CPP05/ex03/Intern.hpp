/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:50:37 by martorre          #+#    #+#             */
/*   Updated: 2024/05/28 16:20:46 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
    private:
				
    public:
		Intern();
		Intern( const Intern& );
		Intern	&operator=(const Intern &other);
        AForm *makeForm( std::string, std::string );
        AForm *createPresidential( std::string );
        AForm *createRobotomy( std::string );
        AForm *createShrubbery( std::string );
		~Intern();
		class Formnotfound : public std::exception {
			public:
				const char* what () const throw() {
				return "Form not found :((";
			}
		};
};