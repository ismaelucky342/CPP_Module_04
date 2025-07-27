/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:52:51 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/24 20:55:50 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

/*=================================HEADERS===================================*/

#include "IMateriaSource.hpp"

/*=================================CLASS===================================*/

class MateriaSource: public IMateriaSource
{
	public:
		virtual void learnMateria(AMateria *tolearn);
		virtual AMateria *createMateria(std::string const &);
		MateriaSource();
		MateriaSource(MateriaSource &tocopy);
		~MateriaSource();
		MateriaSource & operator = (MateriaSource &toequalize);
	private:
		AMateria *materias[4];
};
#endif