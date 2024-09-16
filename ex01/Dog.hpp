/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:52:11 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 17:52:13 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal{

	public:
							Dog(void);
							Dog(const Dog &obj);
							~Dog(void);
		Dog&				operator=(const Dog &obj);
		void				makeSound(void) const;

};
#endif