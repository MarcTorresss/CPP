/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:34:42 by martorre          #+#    #+#             */
/*   Updated: 2024/06/06 12:27:10 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib> // Para srand y rand
#include <ctime> // Para time
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Z.hpp"

Base*	generateA()
{
    return new A();
}

Base*	generateB()
{
    return new B();
}

Base*	generateC()
{
    return new C();
}

Base*	generate(void)
{
	std::srand(std::time(0));
    int randomValue = std::rand() % 3;

    switch (randomValue) {
     case 0:
		std::cout << "Class A instanciate" << std::endl;
    	return generateA();
     case 1:
		std::cout << "Class B instanciate" << std::endl;
		return generateB();
     case 2:
		std::cout << "Class C instanciate" << std::endl;
		return generateC();
	default:
	return NULL;
    }
}

void	identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
} 

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return;
	}	
	catch (std::exception& e)
    {
    	std::cerr << "The argument is not of Class A" << std::endl;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return;
	}	
	catch (std::exception& e)
    {
    	std::cerr << "The argument is not of Class B" << std::endl;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return;
	}	
	catch (std::exception& e)
    {
    	std::cerr << "The argument is not of Class C" << std::endl;
	}
}

int	main()
{
	A		a;
	B		b;
	C		c;
	Z		z;
	Base	*baseptr = &b;
	Base	&baseref = a;
	Base	*baseptr_wrong = &z;
	Base	&baseref_wrong = z;

	identify(baseptr);

	std::cout << std::endl;

	identify(baseref);

	std::cout << std::endl;

	identify(baseptr_wrong);

	std::cout << std::endl;

	identify(baseref_wrong);

	std::cout << std::endl;

	generate();
	
	return (0);
}