#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name("default") {
    std::cout << "DiamondTrap default constructor was called!" << std::endl;
}

/*  DiamondTrap::DiamondTrap(std::string name)
     : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)

     Base constructors run automatically, no need to call them explicitly
*/
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name) {
    hit = 100;
    energy = 50;
    damage = 30;
    std::cout << "DiamondTrap " << name << " has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
    : ClapTrap(src.name + "_clap_name"), ScavTrap(src), FragTrap(src), name(src.name) {}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
        name = rhs.name;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " has been disposed!" << std::endl;
}

/*
  DATA  (members): only 1 copy in ClapTrap subobject.
                   ScavTrap::_energyPoints is just an alias → same address.
                   Writing to it = self-assignment.

  FUNCS (virtual): each class has its OWN vtable with its OWN function pointer.
                   ScavTrap's vptr → ScavTrap vtable → ScavTrap::attack().
                   That pointer is real and separate, not an alias.
                   "using ScavTrap::attack" just tells DiamondTrap's
                   vtable to copy ScavTrap's attack() entry.
*/

void DiamondTrap::attack(const std::string &target) {
    std::cout << "DiamondTrap " << name << " attacks " << target << "!" << std::endl;
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap: " << name << " is a ClapTrap: " << ClapTrap::name
              << " under the hood!" << std::endl;
}

void DiamondTrap::showStatus() {
    std::cout << "DiamondTrap -> " << std::endl;
    ClapTrap::showStatus();
}
