/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:14:38 by martorre          #+#    #+#             */
/*   Updated: 2024/05/16 12:16:29 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( const Brain &other )
{
    std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);   
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}