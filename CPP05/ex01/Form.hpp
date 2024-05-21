/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:34:53 by martorre          #+#    #+#             */
/*   Updated: 2024/05/21 17:39:51 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form{
    private:
        const std::string	_name;
        bool				_construction;
        const int			_gradeSign;
		const int			_gradeExecute;

    public:
		Form();
		Form( std::string, int);
		Form( const Form& );
		Form	&operator=(const Form &other);
		std::string	getName( void ) const;
		int			getGradeSign( void );
		int			getGradeExecute( void );
		int			getConstruction( void );
		void		beSigned( Bureaucrat );
		
		~Form();
};