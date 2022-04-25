/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:47:20 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/21 11:49:13 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : _test(0)
{
    return ;
}

Data::Data( std::string const & str ) : _test(str)
{
    return ;
}

Data::Data( Data const & cpy ) : _test(cpy.getTest())
{
    return ;
}


Data::~Data( void )
{
    return ;
}


void    Data::operator=(const Data& op)
{
    this->_test = op.getTest();
    return ;
}


std::string Data::getTest( void ) const
{
    return (this->_test);
}