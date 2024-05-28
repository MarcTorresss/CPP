/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:29:03 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 17:27:59 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("IglesiaCatolica"), _issigned(false), _gradeSign(55), _gradeExecute(100)
{

}

AForm::AForm( std::string name, int gradeSign, int gradeExecute ): _name(name), _issigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{

}

AForm::AForm( const AForm &other): _name(other._name), _issigned(other._issigned), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute)
{

}

AForm	&AForm::operator=(const AForm &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_issigned = other._issigned;
    return (*this);   
}

std::string	AForm::getName( void ) const
{
    return _name;
}

int AForm::getGradeSign( void ) const
{
    return _gradeSign;
}

int AForm::getGradeExecute( void ) const
{
    return _gradeExecute;
}

bool AForm::getIsSigned( void ) const
{
    return _issigned;
}

void    AForm::beSigned( Bureaucrat b)
{
    if (b.getGrade() < getGradeSign())
        _issigned = true;
    else
        throw GradeTooLowException();
}

std::string	AForm::printStatus() const
{
	if (getIsSigned())
		return ("Signed");
	else
		return ("Not signed");
	return NULL;
}

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
    out << "-----------------" << std::endl
        << "Form name: " << f.getName() << std::endl
        << "Status: " << f.printStatus() << std::endl
        << "Grade to sign: " << f.getGradeSign() << std::endl
        << "Grade to execute: " << f.getGradeExecute() << std::endl
        << "-----------------";
    return out;
}

void    AForm::execute(Bureaucrat const & executor) const
{
    std::cout << "burograde " << executor.getGrade() << " minexe " << getGradeSign() << std::endl;
    if (executor.getGrade() < getGradeSign() && _issigned == true)
        executeForm();
    else
        throw CannotExecute();
}

AForm::~AForm()
{

}