#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap default constructor was called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " has been disposed!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << name << " attacks " << target << "!" << std::endl;
    ClapTrap::attack(target);
}

void ScavTrap::showStatus() {
    std::cout << "ScavTrap -> " << std::endl;
    ClapTrap::showStatus();
}