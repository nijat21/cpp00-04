#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " has been disposed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << getName() << ": GIVE ME A HIGH-FIVE!" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << getName() << " attacks " << target << "!" << std::endl;
    ClapTrap::attack(target);
}

void FragTrap::showStatus() {
    std::cout << "FragTrap -> " << std::endl;
    ClapTrap::showStatus();
}