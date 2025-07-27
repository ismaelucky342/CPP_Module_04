/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:32 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/30 19:10:24 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

/*=================================HEADERS===================================*/

#include "Animal.hpp"

/*=================================CLASS===================================*/

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog &tocopy);
		~Dog();
		Dog & operator = (Dog &toequalize);
		virtual void makeSound() const;
};

#endif