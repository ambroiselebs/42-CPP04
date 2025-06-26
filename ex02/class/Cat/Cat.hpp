/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:56:46 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:42:48 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat& operator=(const Cat &other);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};


#endif
