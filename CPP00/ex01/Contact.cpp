/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:28:02 by martorre          #+#    #+#             */
/*   Updated: 2024/03/26 14:34:56 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void    Contact::setFN(std::string str)
{
    FirstName = str;
}

void	Contact::setLN(std::string str)
{
    LastName = str;
}

void	Contact::setNN(std::string str)
{
    NickName = str;
}

void	Contact::setPN(std::string str)
{
    phoneNum = str;
}

void	Contact::setDS(std::string str)
{
    DarkestSecret = str;
}

std::string	Contact::getFN()
{
    return (FirstName);
}
std::string	Contact::getLN()
{
    return (LastName);
}
std::string	Contact::getNN()
{
    return (NickName);
}
std::string	Contact::getPN()
{
    return (phoneNum);
}
std::string	Contact::getDS()
{
    return (DarkestSecret);
}

Contact::Contact(){}

Contact::Contact(std::string _FirstName, std::string _LastName, std::string _NickName,
    std::string _phoneNum, std::string _DarkestSecret)
{
    FirstName = _FirstName;
    LastName = _LastName;
    NickName = _NickName;
    phoneNum = _phoneNum;
    DarkestSecret = _DarkestSecret;
}