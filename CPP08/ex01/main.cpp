/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:33:39 by martorre          #+#    #+#             */
/*   Updated: 2024/06/13 17:30:11 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    sp.printVector();

    std::cout << "The shortes Span " << sp.shortestSpan() << std::endl;
    std::cout << "The longest Span " << sp.longestSpan() << std::endl;

    Span sp2 = Span(10);

    std::list<int> list;

    for (int i = 0; i < 10; i++)
        list.push_back(i);

    sp2.addMultiNumbers(list.begin(), list.end());

    sp2.printVector();

    std::cout << "The shortes Span " << sp2.shortestSpan() << std::endl;
    std::cout << "The longest Span " << sp2.longestSpan() << std::endl;
    return 0;
}