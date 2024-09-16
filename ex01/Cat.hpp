/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:51:39 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/16 17:51:42 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal{

	public:
							Cat(void);
							Cat(const Cat &obj);
							~Cat(void);
		Cat&				operator=(const Cat &obj);
		void				makeSound(void) const;

};
#endif