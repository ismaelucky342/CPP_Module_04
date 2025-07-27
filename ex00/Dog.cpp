/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:29 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/14 18:34:49 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << BRIGHT_GREEN << "Dog  --  Default constructor called." << RESET << std::endl;
}

Dog::Dog(Dog &tocopy) : Animal(tocopy)
{
	*this = tocopy;
	std::cout << BLUE << "Dog  --  Copy constructor called." << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << BRIGHT_RED << "Dog  --  Default destructor called." << RESET << std::endl;
}

Dog & Dog::operator = (Dog &toequalize)
{
	type = toequalize.type;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}