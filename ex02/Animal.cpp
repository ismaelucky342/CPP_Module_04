/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:14 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/17 21:54:33 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	if (INFOS)
		std::cout << BRIGHT_GREEN << "Animal - Default constructor called." << RESET << std::endl;
	type = "???";
}

Animal::Animal(std::string _type)
{
	if (INFOS)
		std::cout << YELLOW << "Animal - Specific constructor called." << RESET << std::endl;
	type = _type;
}

Animal::Animal(const Animal &tocopy)
{
	if (INFOS)
		std::cout << BLUE << "Animal - Copy constructor called." << RESET << std::endl;
	type = tocopy.type;
	*this = tocopy;
}

Animal::~Animal()
{
	if (INFOS)
		std::cout << BRIGHT_RED << "Animal - Default destructor called." << RESET << std::endl;
}

Animal & Animal::operator = (const Animal &toequalize)
{
	if (INFOS)
		std::cout << "Animal - Assignation operator called." << std::endl;
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
