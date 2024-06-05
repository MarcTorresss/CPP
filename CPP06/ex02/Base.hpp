/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:19:54 by martorre          #+#    #+#             */
/*   Updated: 2024/06/05 19:02:56 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Base{		
	public:
		virtual ~Base();
		Base*	generate(void);
		void	identify(Base* p);
		void	identify(Base& p);
		Base* 	generateA();
		Base* 	generateB();
		Base* 	generateC();

};
