#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
  public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator=(const DiamondTrap &rhs);
    ~DiamondTrap();

    void attack(const std::string &target);
    void whoAmI();
    void showStatus();

  private:
    std::string name;
};

#endif
