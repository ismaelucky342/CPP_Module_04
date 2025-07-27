/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:14 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/19 21:48:30 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "???";
	std::cout << BRIGHT_GREEN << "WrongAnimal - Default constructor called." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type)
{
	type = _type;
	std::cout << YELLOW << "WrongAnimal - Specific constructor called." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &tocopy)
{
	type = tocopy.type;
	*this = tocopy;
	std::cout << BLUE << "WrongAnimal - Copy constructor called." << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BRIGHT_RED << "WrongAnimal - Default destructor called." << RESET << std::endl;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &toequalize)
{
	type = toequalize.type;
	return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Umm... What was I supposed to wrongly say here?" << std::endl;
}

const std::string WrongAnimal::getType() const
{
	return(type);
}
