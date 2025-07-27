/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rage.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:22:24 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/26 23:15:50 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rage.hpp"

Rage::Rage(): AMateria("rage")
{
	if (NOTIFS)
		std::cout << BRIGHT_GREEN << "Rage default constructor called." << RESET << std::endl;
}

Rage::Rage(Rage &tocopy): AMateria("rage")
{
	if (NOTIFS)
		std::cout << BLUE << "Rage copy constructor called." << RESET << std::endl;
	*this = tocopy;
}

Rage::~Rage()
{
	if (NOTIFS)
		std::cout << BRIGHT_RED << "Rage default destructor called." << RESET << std::endl;
}

Rage & Rage::operator = (Rage &toequalize)
{
	if (NOTIFS)
		std::cout << GREEN << "Rage assignation operator called." << RESET << std::endl;
	(void)toequalize;
	return (*this);
}

AMateria* Rage::clone() const
{
	AMateria* ret = new Rage;
	return (ret);
}

void Rage::use(ICharacter& target)
{
	std::cout << "* uses a rage spell against " << target.getName() << " *" << std::endl;
}
