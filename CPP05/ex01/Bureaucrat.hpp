/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:37:21 by martorre          #+#    #+#             */
/*   Updated: 2024/05/21 17:34:04 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>

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
		int			getGrade( void );
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm();
		
		~Bureaucrat();
};