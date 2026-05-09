#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs)
    {
	   type = rhs.type;
    }
    return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "MEOW MEOW" << std::endl;
}

std::string Cat::getType() const {
	return "Cat";
}
