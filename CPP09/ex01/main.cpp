/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:11:47 by martorre          #+#    #+#             */
/*   Updated: 2024/07/03 13:00:17 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./eval_expr \"expression\"" << std::endl;
        return 1;
    }
    RPN rpn(argv[1]);
    try 
    {
        rpn.evalExpr();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}