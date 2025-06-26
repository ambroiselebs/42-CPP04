/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:33:56 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:37:01 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain &other);
		~Brain();

		Brain&		operator=(const Brain& other);

		void		setIdea(int index, const std::string& idea);
		std::string	getIdea(int index) const;
};


#endif
