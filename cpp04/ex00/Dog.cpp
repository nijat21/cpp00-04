#include "Dog.hpp"
#include <iostream>


Dog::Dog() : Animal() {
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src){}

Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs)
    {
	    type = rhs.type;
    }
    return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "WOOF WOOF" << std::endl;
}

std::string Dog::getType() const {
	return "Dog";
}
