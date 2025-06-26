/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:47:59 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:03:46 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal();

		Animal& operator=(const Animal &other);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};


#endif
