/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:29 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/18 18:14:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	if (INFOS)
		std::cout << BRIGHT_GREEN << "Dog  --  Default constructor called." << RESET << std::endl;
	mind = new Brain();
	type = "Dog";
}

Dog::Dog(Dog &tocopy)
{
	if (INFOS)
		std::cout << BLUE << "Dog  --  Copy constructor called." << RESET << std::endl;
	mind = NULL;
	*this = tocopy;
}

Dog::~Dog()
{
	if (INFOS)
		std::cout << BRIGHT_RED << "Dog  --  Default destructor called." << RESET << std::endl;
	delete mind;
}

Dog & Dog::operator = (Dog &toequalize)
{
	if (INFOS)
		std::cout << "Dog  --  Assignation operator called." << std::endl;
	type = toequalize.type;
	if (mind != NULL)
		delete mind;
	mind = new Brain(*toequalize.mind);
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::dog_think(int index, std::string newidea)
{
	mind->think(index, newidea);
}

std::string Dog::dog_recall(int index)
{
	return(mind->recall(index));
}
