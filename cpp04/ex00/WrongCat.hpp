#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
  
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &rhs);
        ~WrongCat();

	std::string attribute;

	std::string getType() const;	
	void makeSound() const;
};

#endif
