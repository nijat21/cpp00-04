#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
  public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &rhs);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void showStatus();

  private:
    std::string name;
    int hit;
    int energy;
    int damage;
};

#endif
