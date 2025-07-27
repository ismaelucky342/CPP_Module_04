/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:32 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/30 19:08:37 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

/*=================================HEADERS===================================*/

#include "Animal.hpp"

/*=================================CLASS===================================*/

class Dog: public Animal
{
	private:
		Brain *mind;
	public:
		Dog();
		Dog(Dog &tocopy);
		virtual ~Dog();
		Dog & operator = (Dog &toequalize);
		virtual void makeSound() const;
		void dog_think(int index, std::string newidea);
		std::string dog_recall(int index);
};

#endif