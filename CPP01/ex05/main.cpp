/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:32:11 by martorre          #+#    #+#             */
/*   Updated: 2024/04/02 14:35:50 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("debug");
    std::cout << std::endl;
    harl.complain("info");
    std::cout << std::endl;
    harl.complain("warning");
    std::cout << std::endl;
    harl.complain("error");
}