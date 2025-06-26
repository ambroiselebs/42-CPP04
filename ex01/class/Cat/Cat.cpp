/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:05:58 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:48:02 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	type = other.getType();
	this->brain = new Brain(*(other.brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat = called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "** Miou sound **" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}
