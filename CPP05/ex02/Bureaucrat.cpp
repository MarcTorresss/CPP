/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:49:17 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 17:22:02 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}
Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &other )
{
	*this = other;
}
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
	// this->_name = other._name;
    this->_grade = other._grade;
    return (*this);   
}

std::string Bureaucrat::getName( void ) const
{
	return _name;
}

int Bureaucrat::getGrade( void ) const
{
	return _grade;
}

void	Bureaucrat::incrementGrade( void )
{
	_grade--;
	if (_grade > 150)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade( void )
{
	_grade++;
	if (_grade < 1)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm( AForm &f )
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signed from " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << "couldn 't signed from " << f.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " cannot execute from " << form.getName() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
    
}