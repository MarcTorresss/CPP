/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:37:21 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 17:19:26 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
    private:
        const std::string	_name;
        int					_grade;
				
    public:
		Bureaucrat();
		Bureaucrat( std::string, int);
		Bureaucrat( const Bureaucrat& );
		Bureaucrat	&operator=(const Bureaucrat &other);
		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm( AForm &f );
		void	executeForm(AForm const & form);
		
		~Bureaucrat();
		class GradeTooHighException : public std::exception {
			public:
				const char* what () const throw() {
				return "Grade Too High :((";
			}
		};


		class GradeTooLowException : public std::exception {
			public:
				const char* what () const throw() {
				return "Grade Too Low :((";
			}
		};
};