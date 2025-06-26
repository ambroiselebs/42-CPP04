/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:08:06 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:11:08 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& other);
	~WrongAnimal(void);
	WrongAnimal&	operator=(const WrongAnimal& other);

	void		makeSound(void) const;
	std::string	getType(void) const;
};

#endif
