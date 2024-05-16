/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:37:21 by martorre          #+#    #+#             */
/*   Updated: 2024/05/16 18:49:16 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Bureaucrat{
    protected:
        std::string name const;
        int         grade;
				
    public:
		Bureaucrat();
		Bureaucrat( std::string );
		Bureaucrat( const Bureaucrat& );
		Bureaucrat	&operator=(const Bureaucrat &other);
		std::string	getName( void ) const;
		int			getGrade( void );
		~Bureaucrat();
};