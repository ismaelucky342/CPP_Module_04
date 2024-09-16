/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:51:23 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 17:51:30 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {

	std::cout << "Class [Cat](void) constructor called!!\n";
}
Cat::Cat(const Cat &obj): Animal(obj.type){
	
	std::cout << "Class [Cat](Cat) constructor called!!\n";
}
Cat::~Cat(void){

	std::cout << "Class [Cat](Cat) destructor called!!\n";
}
Cat&				Cat::operator=(const Cat &obj){

	if (this != &obj){

		this->type = obj.type;
	}
	std::cout << "Class [Cat](Cat) operator called!!\n";
	return *this;
}

void				Cat::makeSound(void) const{

	std::cout << "miao miao miao!\n";
}