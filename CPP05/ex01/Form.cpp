/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:29:03 by martorre          #+#    #+#             */
/*   Updated: 2024/05/21 17:45:50 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{

}

Form::Form( const Form& other)
{

}

Form	&Form::operator=(const Form &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
	// this->_name = other._name;
    this->_construction = other._construction;
    this->_gradeExecute = other._gradeExecute;
    this->_gradeSign = other._gradeSign;
    return (*this);   
}

std::string	Form::getName( void ) const
{
    return _name;
}

int Form::getGradeSign( void )
{
    return _gradeSign;
}

int Form::getGradeExecute( void )
[
    return _gradeExecute;
]

int Form::getConstruction( void )
{
    return _construction;
}

void    Form::beSigned( Bureaucrat b)
{
    if (b.getGrade() > xxx)
        _construction = true;
    else
        throw GradeTooLowException();
}

Form::~Form()
{

}