/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:38:48 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/30 19:08:54 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	if (INFOS)
		std::cout << BRIGHT_GREEN << "Brain -- Default constructor called." << RESET << std::endl;
}

Brain::Brain(Brain &tocopy)
{
	if (INFOS)
		std::cout << BLUE << "Brain -- Copy constructor called." << RESET << std::endl;
	int a = 0;

	while (a < 100)
	{
		ideas[a] = tocopy.ideas[a];
		a++;
	}
	*this = tocopy;
}

Brain::~Brain()
{
	if (INFOS)
		std::cout << BRIGHT_RED << "Brain -- Default destructor called." << RESET << std::endl;
}

Brain & Brain::operator = (Brain &toequalize)
{
	if (INFOS)
		std::cout << "Brain -- Assignation operation called." << std::endl;
	int a = 0;

	while (a < 100)
	{
		ideas[a] = toequalize.ideas[a];
		a++;
	}
	return(*this);
}

void Brain::think(int index, std::string newidea)
{
	ideas[index] = newidea;
}

std::string Brain::recall(int index)
{
	return(ideas[index]);
}
