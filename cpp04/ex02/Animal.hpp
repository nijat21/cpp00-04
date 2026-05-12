#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &rhs);
        virtual ~Animal();

	virtual void makeSound() const;
	virtual std::string getType() const;
	virtual void showIdeas() const = 0;
	virtual int getId() const = 0;

    protected:
	std::string type;
};

#endif
