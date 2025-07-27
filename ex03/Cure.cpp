/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:22:28 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/29 19:34:16 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	if (NOTIFS)
		std::cout << BRIGHT_GREEN << "Cure default constructor called." << RESET << std::endl;
}

Cure::Cure(Cure &tocopy): AMateria("cure")
{
	if (NOTIFS)
		std::cout << BLUE << "Cure copy constructor called." << RESET << std::endl;
	*this = tocopy;
}

Cure::~Cure()
{
	if (NOTIFS)
		std::cout << BRIGHT_RED << "Cure default destructor called." << RESET << std::endl;
}

Cure & Cure::operator = (Cure &toequalize)
{
	if (NOTIFS)
		std::cout << GREEN << "Cure assignation operator called." << RESET << std::endl;
	(void)toequalize;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria* ret = new Cure;
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
