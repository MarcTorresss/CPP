/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:49:17 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 12:11:30 by martorre         ###   ########.fr       */
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
    std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << "-----------------" << std::endl
        << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl
        << "-----------------";
    return out;
}

Bureaucrat::~Bureaucrat()
{
    
}