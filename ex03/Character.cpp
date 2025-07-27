/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:51:30 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/05 20:55:02 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	if (NOTIFS)
		std::cout << BRIGHT_GREEN << "Character default constructor called." << RESET << std::endl;
	name = "???";
	int a = 0;
	while (a < 4)
		slots[a++] = NULL;
}

Character::Character(std::string _name)
{
	if (NOTIFS)
		std::cout << YELLOW << "Character constructor called." << RESET << std::endl;
	name = _name;
	int a = 0;
	while (a < 4)
		slots[a++] = NULL;
}

Character::Character(Character &tocopy)
{
	if (NOTIFS)
		std::cout << BLUE << "Character copy constructor called." << RESET << std::endl;
	(*this) = tocopy;
}

Character::~Character()
{
	if (NOTIFS)
		std::cout << BRIGHT_RED << "Character default destructor called." << RESET << std::endl;
}

Character & Character::operator = (Character &toequalize)
{
	if (NOTIFS)
		std::cout << BLUE << "Character assignation operator called." << RESET << std::endl;
	name = toequalize.getName();
	int a = 0;
	while (a < 4)
	{
		slots[a] = toequalize.slots[a]->clone();
		a++;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int a = 0;

	if (!m)
	{
		std::cout << RED << "There's nothing to equip!" << RESET << std::endl;
		return ;
	}
	while (a < 4)
	{
		if (!slots[a])
		{
			slots[a] = m;
			std::cout << m->getType() << " equipped on " << name << "'s slot " << a << std::endl;
			a = 41;
		}
		a++;
	}
	if (a != 42)
		std::cout << name << "'s inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Index " << idx << " is not between 0 and 3." << std::endl;
		return ;
	}
	if (!slots[idx])
		std::cout << "Nothing to unequip" << std::endl;
	else
		std::cout << slots[idx]->getType() << " unequipped." << std::endl;
	slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (!slots[idx])
		std::cout << RED << "* unsuccessfully tried to pick a weapon to attack " << target.getName() << " *" << RESET << std::endl;
	else
	{
		slots[idx]->use(target);
		delete (slots[idx]);
		slots[idx] = NULL;
	}
}
