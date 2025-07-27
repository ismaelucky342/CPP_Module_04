/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:22:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/26 23:14:22 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

/*=================================HEADERS===================================*/

#include "AMateria.hpp"

/*=================================CLASS===================================*/

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure &tocopy);
		~Cure();
		Cure & operator = (Cure &toequalize);
		virtual AMateria* clone() const;
		
		virtual void use(ICharacter& target);
};

#endif