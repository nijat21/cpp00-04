#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &rhs);
        ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;

    protected:
	std::string type;
};

#endif
