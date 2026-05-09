#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << "---------------------------------------------------------" << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	

	/*
	 * ERRORS:
	 * 	1. WrongAnimal destructor isn't virtual -> UNDEFINED BEHAVIOR
	 * 	2. WrongCat class has additional attribute="none" defined in constructor ->
	 * 		MEMORY ERRORS given destructor only destructs WrongAnimal
	*/
	std::cout << "---------------------------------------------------------" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "---------------------------------------------------------" << std::endl;
	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* w = new WrongCat();

	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << beta->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;

	std::cout << "---------------------------------------------------------" << std::endl;
	beta->makeSound();
	w->makeSound();

	std::cout << "---------------------------------------------------------" << std::endl;
	delete beta;
	delete w;

	return 0;
}

