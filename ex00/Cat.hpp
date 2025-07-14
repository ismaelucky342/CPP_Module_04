/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:19 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/30 19:10:18 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

/*=================================HEADERS===================================*/

#include "Animal.hpp"

/*=================================CLASS===================================*/

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat &tocopy);
		~Cat();
		Cat & operator = (Cat &toequalize);
		virtual void makeSound() const;
};

#endif