/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rage.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:22:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/26 23:14:30 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAGE_HPP
# define RAGE_HPP

#include "AMateria.hpp"

class Rage: public AMateria
{
	public:
		Rage();
		Rage(Rage &tocopy);
		~Rage();
		Rage & operator = (Rage &toequalize);
		virtual AMateria* clone() const;

		virtual void use(ICharacter& target);
};

#endif