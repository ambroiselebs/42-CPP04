/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:56:46 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:13:10 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "../Animal/Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		~Dog(void);

		Dog& operator=(const Dog &other);

		void	makeSound(void) const;
};


#endif
