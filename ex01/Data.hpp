/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:47:30 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/21 11:48:18 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{

private:
    
    std::string _test;

public:

    Data(void);
    Data(std::string const & str);
    Data(Data const & cpy);
    
    ~Data( void );

    std::string getTest(void) const;
    
    void    operator=(const Data& op);
    
};

#endif