/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:14 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/11 21:24:32 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "???";
	std::cout << BRIGHT_GREEN << "Animal - Default constructor called." << RESET << std::endl;
}

Animal::Animal(std::string _type)
{
	type = _type;
	std::cout << YELLOW << "Animal - Specific constructor called." << RESET << std::endl;
}

Animal::Animal(const Animal &tocopy)
{
	type = tocopy.type;
	*this = tocopy;
	std::cout << BLUE << "Animal - Copy constructor called." << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << BRIGHT_RED << "Animal - Default destructor called." << RESET << std::endl;
}

Animal & Animal::operator = (const Animal &toequalize)
{
	type = toequalize.type;
	return(*this);
}

void Animal::makeSound() const
{
	std::cout << "Umm... What was I supposed to say here?" << std::endl;
}

const std::string Animal::getType() const
{
	return(type);
}
