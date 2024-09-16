/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:53:59 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 17:54:00 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

	protected:
		std::string 		type;
	
	public:
							WrongAnimal(void);
							WrongAnimal(std::string type);
							WrongAnimal(const WrongAnimal &obj);
		virtual				~WrongAnimal(void);
		WrongAnimal&				operator=(const WrongAnimal &obj);
		std::string			getType(void) const;
		void				makeSound(void) const; // no virtual

};

#endif