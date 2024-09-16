/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:51:07 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 17:51:08 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {

	protected:
		std::string 		type;
	
	public:
							Animal(void);
							Animal(std::string type);
							Animal(const Animal &obj);
		virtual				~Animal(void);
		Animal&				operator=(const Animal &obj);
		std::string			getType(void) const;
		virtual	void		makeSound(void) const;

};

#endif