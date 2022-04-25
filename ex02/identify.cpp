/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:00:52 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/25 09:02:45 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Abc.hpp"

void identify( Base* p )
{
    if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
    return ;
}

void identify(Base& p)
{
    try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e)
    {}
	try
	{
		static_cast<void>(dynamic_cast<B &>(p));
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e)
    {}
	try
	{
		static_cast<void>(dynamic_cast<C &>(p));
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e)
    {}

    return ;
}