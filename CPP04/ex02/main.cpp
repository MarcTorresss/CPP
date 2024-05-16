/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:01:24 by martorre          #+#    #+#             */
/*   Updated: 2024/05/16 12:27:50 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal lemur;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal *test[42];
    for(int i = 0; i < 42; i++)
    {
        if (i % 2 == 0)
            test[i] = new Dog();
        else
            test[i] = new Cat();
    }
    for(int i = 0; i < 42; i++)
       delete test[i];
    delete j;//should not create a leak
    delete i;
    return 0;
}