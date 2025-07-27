/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:03:11 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/30 19:17:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

/*=================================HEADERS===================================*/

#include <iostream>


/*=================================COLORS===================================*/

#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define BRIGHT_RED "\033[38;5;196m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BRIGHT_GREEN "\033[38;5;46m"

/*=================================CLASS===================================*/

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal(const WrongAnimal &tocopy);
		virtual ~WrongAnimal();
		WrongAnimal & operator = (const WrongAnimal &toequalize);
		void makeSound() const;
		const std::string getType() const;
};

#endif