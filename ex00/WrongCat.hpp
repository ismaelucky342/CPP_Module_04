/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:55:23 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 18:02:09 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

	public:
							WrongCat(void);
							WrongCat(const WrongCat &obj);
							~WrongCat(void);
		WrongCat&				operator=(const WrongCat &obj);
		void				makeSound(void) const;

};
#endif