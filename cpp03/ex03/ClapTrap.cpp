#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("default"), hit(10), energy(10), damage(0) {}

ClapTrap::ClapTrap(std::string name) : name(name), hit(10), energy(10), damage(0) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    : name(src.name), hit(src.hit), energy(src.energy), damage(src.damage) {}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    if (this != &rhs) {
        name = rhs.name;
        hit = rhs.hit;
        energy = rhs.energy;
        damage = rhs.damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been disposed!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (hit <= 0 || energy <= 0) {
        std::cout << "ClapTrap " << name << " can't attack!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " attacks " << target << "!" << std::endl;
        energy--;
    }
}
void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " took " << amount << ", damage!" << std::endl;
    hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hit <= 0 || energy <= 0) {
        std::cout << "ClapTrap " << name << " can't repair itself!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " repaired itself and gained " << amount
                  << " hit points!" << std::endl;
        energy--;
        hit += amount;
    }
}

void ClapTrap::showStatus() const {
    if (hit <= 0 || energy <= 0)
        std::cout << "ClapTrap " << name << " is DEAD!" << std::endl;
    else
        std::cout << "ClapTrap " << name << " has:\n    hit points: " << hit
                  << "\n    energy points: " << energy << "\n    damage: " << damage << std::endl;
}
