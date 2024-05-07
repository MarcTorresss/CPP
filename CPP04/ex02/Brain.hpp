/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:12:55 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 12:38:29 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Brain{
    private:
        std::string ideas[100];
				
    public:
		Brain();
		Brain( const Brain& );
		Brain	&operator=(const Brain &other);
		~Brain();
};