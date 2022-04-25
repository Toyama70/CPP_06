/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:37:08 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/20 20:40:46 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <cmath>

class Conv
{
private:
    
    int     _isInt;
    int     _isChar;
    int     _valInt;
    char    _valChar;
    float   _valFloat;
    double  _valDouble;

public:

    Conv( void );
    Conv( std::string in );
    Conv( Conv const & cpy );

    ~Conv( void );

    int     getValInt( void ) const;
    int     getIsInt( void ) const;
    int     getIsChar( void ) const;
    
    char    getValChar( void ) const;
    
    float   getValFloat( void ) const;
    
    double  getValDouble( void ) const;

    void    operator=(const Conv& op);

};

#endif