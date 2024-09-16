/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:02:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 18:02:16 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {

	std::cout << "Class [WrongCat](void) constructor called!!\n";
}
WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj.type){
	
	std::cout << "Class [WrongCat](WrongCat) constructor called!!\n";
}
WrongCat::~WrongCat(void){

	std::cout << "Class [WrongCat](WrongCat) destructor called!!\n";
}
WrongCat&				WrongCat::operator=(const WrongCat &obj){

	if (this != &obj){

		this->type = obj.type;
	}
	std::cout << "Class [WrongCat](WrongCat) operator called!!\n";
	return *this;
}

void				WrongCat::makeSound(void) const{

	std::cout << "miao miao miao!\n";
}