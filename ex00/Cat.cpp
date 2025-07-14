/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:17 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/14 18:34:53 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat  --  Default constructor called." << std::endl;
}

Cat::Cat(Cat &tocopy) : Animal(tocopy)
{
	*this = tocopy;
	std::cout << "Cat  --  Copy constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat  --  Default destructor called." << std::endl;
}

Cat & Cat::operator = (Cat &toequalize)
{
	type = toequalize.type;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}