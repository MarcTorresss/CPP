/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:33:15 by martorre          #+#    #+#             */
/*   Updated: 2024/03/26 12:13:11 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Contact{
    private:
        std::string  FirstName;
        std::string  LastName;
        std::string  NickName;
        std::string  phoneNum;
        std::string  DarkestSecret;
    
    public:
		Contact();
        Contact(std::string, std::string, std::string, std::string, std::string);
        void	setFN(std::string);
		void	setLN(std::string);
		void	setNN(std::string);
		void	setPN(std::string);
		void	setDS(std::string);
        std::string	getFN();
		std::string	getLN();
		std::string	getNN();
		std::string	getPN();
		std::string	getDS();
};
