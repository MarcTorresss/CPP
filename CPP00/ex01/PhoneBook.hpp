/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:33:15 by martorre          #+#    #+#             */
/*   Updated: 2024/03/27 12:06:16 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <iomanip>      //setw() -- columnas

class PhoneBook{
    private:
        Contact     Listcontact[8];
        int         qtt;
    
    public:
        PhoneBook();
        void    add();
        void    search();
        void    ft_print();
};

#endif