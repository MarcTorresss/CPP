/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:38:07 by martorre          #+#    #+#             */
/*   Updated: 2024/07/04 15:52:07 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <cstdlib>

RPN::RPN()
{

}

RPN::RPN(std::string str)
{
    _str = str;
}

RPN::RPN( const RPN &other )
{
	*this = other;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this == &other)
    	return *this;
		
	_str = other._str;
	return *this;
}

void	RPN::calculations(char c)
{
	if (stack.size() < 2)
		throw std::invalid_argument("Invalid :(");
	int	second_num = stack.top();
	stack.pop();
	int	first_num = stack.top();
	stack.pop();
	int	result = 0;
	if (c == '+')
		result = first_num + second_num;
	else if (c == '*')
		result = first_num * second_num;
	else if (c == '-')
		result = first_num - second_num;
	else if (c == '/')
		result = first_num / second_num;
	stack.push(result);
}

void	RPN::evalExpr()
{
	for (size_t i = 0; i < _str.size(); ++i)
	{
        char c = _str[i];
		if (std::atoi(&c) != 0 || c == 48)
			stack.push(std::atoi(&c));
		else if (c == '+' || c == '-' || c == '*' || c == '/')
			calculations(c);
    }
	if (stack.size() != 1)
		throw std::invalid_argument("Invalid :(");
	std::cout << stack.top() << std::endl;
}

RPN::~RPN()
{

}