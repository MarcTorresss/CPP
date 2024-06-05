/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:19:51 by martorre          #+#    #+#             */
/*   Updated: 2024/06/05 19:12:06 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{

}

Base* Base::generateA()
{
    return new A();
}

Base* Base::generateB()
{
    return new B();
}

Base* Base::generateC()
{
    return new C();
}

Base*	Base::generate(void)
{
	std::srand(std::time(0));
    int randomValue = std::rand();

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
	break;
    }
}

void identify(Base* p)
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

static void identify(Base& p)
{
	try
	{
			A& a = dynamic_cast<A&>(p);
			std::cout << "A" << std::endl;
			return;
	}    catch (std::exception& e)
    {
        std::cout << "int: impossible" << std::endl;
    }

};