/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:50:45 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 17:50:46 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("UnSet"){

	std::cout << "class [Animal](void) constructor called!\n";
}

Animal::Animal(std::string type): type(type){

	std::cout << "class [Animal](string) constructor called!\n";
}

Animal::Animal(const Animal &obj): type(obj.type){

	std::cout << "class [Animal](Animal) constructor called!\n";
}

Animal::~Animal(void){

	std::cout << this->type << " class [Animal](void) destoryed!!" << std::endl;
}

Animal&				Animal::operator=(const Animal &obj){

	std::cout << "class [Animal](Animal) operator called!\n";
	if (this != &obj){

		this->type = obj.type;
	}
	return *this;
}

std::string			Animal::getType(void) const{

	return this->type;
}

void		Animal::makeSound(void) const{

	std::cout << "Unkown sound!\n";
}