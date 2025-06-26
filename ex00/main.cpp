/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:08:33 by aberenge          #+#    #+#             */
/*   Updated: 2025/06/26 21:29:09 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "class/Animal/Animal.hpp"
#include "class/Dog/Dog.hpp"
#include "class/Cat/Cat.hpp"
#include "class/WrongAnimal/WrongAnimal.hpp"
#include "class/WrongCat/WrongCat.hpp"

int main()
{
	std::cout << "=== POLYMORPHISM TEST ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "--- Types test ---" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << std::endl << "--- makeSound test ---" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "--- Destruction ---" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "=== WRONG CLASSES TEST ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << std::endl << "--- Wrong Types test ---" << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	std::cout << std::endl << "--- Wrong makeSound test ---" << std::endl;
	wrongMeta->makeSound();
	wrongCat->makeSound();
	std::cout << std::endl << "--- Wrong Destruction ---" << std::endl;
	delete wrongMeta;
	delete wrongCat;

	std::cout << std::endl << "=== ADDITIONAL TESTS ===" << std::endl;

	std::cout << std::endl << "--- Array test ---" << std::endl;
	const Animal* animals[4];
	animals[0] = new Animal();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Dog();

	for (int k = 0; k < 4; k++)
	{
		std::cout << "Animal " << k << " is a " << animals[k]->getType();
		std::cout << " and makes: ";
		animals[k]->makeSound();
	}

	std::cout << std::endl << "--- Array cleanup ---" << std::endl;
	for (int k = 0; k < 4; k++)
		delete animals[k];

	std::cout << std::endl << "--- Direct objects test ---" << std::endl;
	Animal directAnimal;
	Dog directDog;
	Cat directCat;

	std::cout << "Direct calls:" << std::endl;
	directAnimal.makeSound();
	directDog.makeSound();
	directCat.makeSound();

	std::cout << std::endl << "--- End of tests ---" << std::endl;
	return 0;
}
