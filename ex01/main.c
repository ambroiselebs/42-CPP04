/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:33:43 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:45:21 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Animal/Animal.hpp"
#include "class/Dog/Dog.hpp"
#include "class/Cat/Cat.hpp"
#include "class/Brain/Brain.hpp"

void	test_basic_functionality(void)
{
	std::cout << "=== Test Basic Functionality ===" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	std::cout << std::endl;
}

void	test_array_animals(void)
{
	std::cout << "=== Test Array of Animals ===" << std::endl;
	const int		size = 4;
	Animal*			animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < size; i++)
		delete animals[i];
	std::cout << std::endl;
}

void	test_deep_copy(void)
{
	std::cout << "=== Test Deep Copy ===" << std::endl;
	Dog	original;

	original.getBrain()->setIdea(0, "Chase the ball");
	original.getBrain()->setIdea(1, "Eat treats");

	Dog	copy = original;
	copy.getBrain()->setIdea(0, "Sleep all day");

	std::cout << "Original idea 0: " << original.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy idea 0: " << copy.getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;
}

void	test_assignment_operator(void)
{
	std::cout << "=== Test Assignment Operator ===" << std::endl;
	Cat	cat1;
	Cat	cat2;

	cat1.getBrain()->setIdea(0, "Hunt mice");
	cat2 = cat1;
	cat2.getBrain()->setIdea(0, "Nap in sunlight");

	std::cout << "Cat1 idea 0: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2 idea 0: " << cat2.getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	test_basic_functionality();
	test_array_animals();
	test_deep_copy();
	test_assignment_operator();

	return (0);
}
