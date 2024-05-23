/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:29:03 by martorre          #+#    #+#             */
/*   Updated: 2024/05/22 15:41:19 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("IglesiaCatolica"), _issigned(true), _gradeSign(55), _gradeExecute(100)
{

}

Form::Form( std::string name, int gradeSign, int gradeExecute ): _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{

}

Form::Form( const Form &other): _name(other._name), _issigned(other._issigned), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute)
{

}

Form	&Form::operator=(const Form &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_issigned = other._issigned;
    return (*this);   
}

std::string	Form::getName( void ) const
{
    return _name;
}

int Form::getGradeSign( void ) const
{
    return _gradeSign;
}

int Form::getGradeExecute( void ) const
{
    return _gradeExecute;
}

bool Form::getIsSigned( void ) const
{
    return _issigned;
}

void    Form::beSigned( Bureaucrat b)
{
    if (b.getGrade() < getGradeSign())
        _issigned = true;
    else
        throw GradeTooLowException();
}

std::string	Form::printStatus() const
{
	if (getIsSigned())
		return ("Signed");
	else
		return ("Not signed");
	return NULL;
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
    out << "-----------------" << std::endl
        << "Form name: " << f.getName() << std::endl
        << "Status: " << f.printStatus() << std::endl
        << "Grade to sign: " << f.getGradeSign() << std::endl
        << "Grade to execute: " << f.getGradeExecute() << std::endl
        << "-----------------";
    return out;
}

Form::~Form()
{

}