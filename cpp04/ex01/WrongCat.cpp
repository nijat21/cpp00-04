#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	attribute = "none";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    if (this != &rhs)
    {
	   type = rhs.type;
    }
    return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "MEOW MEOW" << std::endl;
}

std::string WrongCat::getType() const {
	return "WrongCat";
}
