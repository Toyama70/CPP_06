/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:37:10 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/20 20:46:26 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Conv	nb(av[1]);

		if (nb.getIsChar() != 0)
			std::cout << "char: '" << nb.getValChar() << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (nb.getIsInt())
			std::cout << "int: " << nb.getValInt() << std::endl;
		else
			std::cout << "int: Non displayable" << std::endl;
        if (nb.getValFloat() == (int)nb.getValFloat())
		{
		    std::cout << "float: " << nb.getValFloat() << ".0f" << std::endl;
		    std::cout << "double: " << nb.getValDouble() << ".0" << std::endl;
		}
        else
		{
		    std::cout << "float: " << nb.getValFloat() << "f" << std::endl;
		    std::cout << "double: " << nb.getValDouble() << std::endl;
		}
	}
	else
	{
		std::cout << "Arg error ?" << std::endl;
	}
}