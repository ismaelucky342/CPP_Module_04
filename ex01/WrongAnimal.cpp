/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:53:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 17:53:49 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("UnSet"){

	std::cout << "class [WrongAnimal](void) constructor called!\n";
}

WrongAnimal::WrongAnimal(std::string type): type(type){

	std::cout << "class [WrongAnimal](string) constructor called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj): type(obj.type){

	std::cout << "class [WrongAnimal](WrongAnimal) constructor called!\n";
}

WrongAnimal::~WrongAnimal(void){

	std::cout << this->type << " class [WrongAnimal](void) destoryed!!" << std::endl;
}

WrongAnimal&				WrongAnimal::operator=(const WrongAnimal &obj){

	std::cout << "class [WrongAnimal](WrongAnimal) operator called!\n";
	if (this != &obj){

		this->type = obj.type;
	}
	return *this;
}

std::string			WrongAnimal::getType(void) const{

	return this->type;
}

void		WrongAnimal::makeSound(void) const{

	std::cout << "Unkown sound!\n";
}