/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:34:53 by martorre          #+#    #+#             */
/*   Updated: 2024/05/22 15:40:54 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string	_name;
        bool				_issigned;
        const int			_gradeSign;
		const int			_gradeExecute;

    public:
		Form();
		Form( std::string, int, int );
		Form( const Form& );
		Form	&operator=(const Form &other);
		std::string	getName( void ) const;
		int			getGradeSign( void ) const;
		int			getGradeExecute( void ) const;
		bool		getIsSigned( void ) const;
		void		beSigned( Bureaucrat );
		std::string	printStatus() const;

		~Form();
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

std::ostream& operator<<(std::ostream& out, const Form& form);
