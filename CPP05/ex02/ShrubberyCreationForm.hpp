/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:34:53 by martorre          #+#    #+#             */
/*   Updated: 2024/05/27 14:57:56 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
    private:
        std::string			_target;

    public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm& );
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
        void	executeForm( void ) const;
		~ShrubberyCreationForm();
};