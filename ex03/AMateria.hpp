/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:22:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/05 18:45:15 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

/*=================================HEADERS===================================*/

#include "ICharacter.hpp"
#include "notifications.hpp"

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

class AMateria
{
	protected:
		std::string _type;
		
	public:
		AMateria();
		explicit AMateria(std::string const & type);
		AMateria(AMateria &tocopy);
		virtual ~AMateria();
		AMateria & operator = (AMateria &toequalize);

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif