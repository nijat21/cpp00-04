#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator=(const ClapTrap &rhs);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void showStatus() const;

  protected:
    std::string name;
    unsigned int hit;
    unsigned int energy;
    unsigned int damage;
};

#endif
