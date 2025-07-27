/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:22:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/26 23:14:30 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

/*=================================HEADERS===================================*/

#include "AMateria.hpp"

/*=================================CLASS===================================*/

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice &tocopy);
		~Ice();
		Ice & operator = (Ice &toequalize);
		virtual AMateria* clone() const;

		virtual void use(ICharacter& target);
};

#endif