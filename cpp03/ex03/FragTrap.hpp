#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
  public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &rhs);
    ~FragTrap();

    void highFivesGuys(void);
    void attack(const std::string &target);
    void showStatus();
};

#endif
