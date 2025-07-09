/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:17 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/19 21:49:02 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat  --  Default constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat  --  Default destructor called." << std::endl;
}

WrongCat & WrongCat::operator = (WrongCat &toequalize)
{
	type = toequalize.type;
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow but wrong!" << std::endl;
}