#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
    *this = src;
}

Animal &Animal::operator=(const Animal &rhs) {
    if (this != &rhs)
    {
	    type = rhs.type;
    }
    return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called for " << type << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
	return "Animal";
}
