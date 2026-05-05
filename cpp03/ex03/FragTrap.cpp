#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap() {
    hit = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap default constructor was called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hit = 100;
    energy = 100;
    damage = 30;
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
    std::cout << "FragTrap " << name << " has been disposed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << ": GIVE ME A HIGH-FIVE!" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << name << " attacks " << target << "!" << std::endl;
    ClapTrap::attack(target);
}

void FragTrap::showStatus() {
    std::cout << "FragTrap -> " << std::endl;
    ClapTrap::showStatus();
}