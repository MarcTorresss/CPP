/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:37:14 by martorre          #+#    #+#             */
/*   Updated: 2024/07/03 12:56:45 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stack>

class RPN{
    private:
		std::string _str;
		std::stack<int> stack;
		
    public:
		RPN();
		RPN (std::string str);
		RPN( const RPN& );
		RPN	&operator=(const RPN &other);
		void evalExpr();
		void calculations(char c);
		~RPN();
};