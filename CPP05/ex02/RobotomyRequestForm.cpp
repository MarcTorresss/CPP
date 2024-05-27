/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:30:16 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 15:50:44 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("Samu")
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other): _target(other._target)
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);   
}

void	RobotomyRequestForm::executeForm(void) const
{
	std::srand(std::time(0));
    int randomValue = std::rand();
    bool	fiftyPercentChance = (randomValue % 2) == 0;

	if (fiftyPercentChance)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy from " << _target << " failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}