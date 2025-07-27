/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:22:24 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/29 19:31:27 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	if (NOTIFS)
		std::cout << BRIGHT_GREEN << "Ice default constructor called." << RESET << std::endl;
}

Ice::Ice(Ice &tocopy): AMateria("ice")
{
	if (NOTIFS)
		std::cout << BLUE << "Ice copy constructor called." << RESET << std::endl;
	*this = tocopy;
}

Ice::~Ice()
{
	if (NOTIFS)
		std::cout << BRIGHT_RED << "Ice default destructor called." << RESET << std::endl;
}

Ice & Ice::operator = (Ice &toequalize)
{
	if (NOTIFS)
		std::cout << GREEN << "Ice assignation operator called." << RESET << std::endl;
	(void)toequalize;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria* ret = new Ice;
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
