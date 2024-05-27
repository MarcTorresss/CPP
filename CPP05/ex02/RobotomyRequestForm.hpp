/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:34:53 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 14:56:28 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
    private:
		std::string			_target;

    public:
		RobotomyRequestForm();
		RobotomyRequestForm( const RobotomyRequestForm& );
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
        void	executeForm( void ) const;
		~RobotomyRequestForm();
};