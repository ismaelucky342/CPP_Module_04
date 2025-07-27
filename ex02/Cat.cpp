/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:17 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/18 18:35:11 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	if (INFOS)
		std::cout << BRIGHT_GREEN << "Cat  --  Default constructor called." << RESET << std::endl;
	mind = new Brain();
	type = "Cat";
}

Cat::Cat(Cat &tocopy)
{
	if (INFOS)
		std::cout << BLUE << "Cat  --  Copy constructor called." << RESET << std::endl;
	mind = NULL;
	*this = tocopy;
}

Cat::~Cat()
{
	if (INFOS)
		std::cout << BRIGHT_RED << "Cat  --  Default destructor called." << RESET << std::endl;
	delete mind;
}

Cat & Cat::operator = (Cat &toequalize)
{
	if (INFOS)
		std::cout << "Cat  --  Assignation operator called." << std::endl;
	type = toequalize.type;
	if (mind != NULL)
		delete mind;
	mind = new Brain(*toequalize.mind);
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::cat_think(int index, std::string newidea)
{
	mind->think(index, newidea);
}

std::string Cat::cat_recall(int index)
{
	return(mind->recall(index));
}
