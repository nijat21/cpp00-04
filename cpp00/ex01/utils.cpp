#include "utils.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

bool is_phone_number(std::string str) {
    size_t len = str.size();
    if (!(len >= 7 && len <= 15))
        return false;
    for (size_t i = 0; i < str.size(); i++) {
        if (!std::isdigit(static_cast<unsigned char>(str[i]))) {
            if (i == 0 && str[i] == '+' && str[i + 1] &&
                std::isdigit(static_cast<unsigned char>(str[i + 1])))
                continue;
            return false;
        }
    }
    return true;
}

bool is_number(std::string str) {
    for (size_t i = 0; i < str.size(); i++)
        if (!std::isdigit(str[i])) {
            if (i == 0 && (str[i] == '-' || str[i] == '+'))
                continue;
            return false;
        }
    return true;
}

std::string concat_longer(std::string str) {
    if (str.size() > 10) {
        return str.substr(0, 9) + '.';
    }
    return str;
}

std::string concat_spaces(std::string str) {
    size_t i = 0;
    while (std::isspace(str[i]))
        i++;
    std::string res;
    while (str[i]) {
        res += str[i];
        i++;
        if (i == str.size() || std::isspace(str[i]))
            break;
    }
    if (res.empty())
        return NULL;
    return res;
}

std::string to_lower(std::string s) {
    for (size_t i = 0; i < s.size(); i++)
        s[i] = std::tolower(s[i]);
    return s;
}

void print_border() {
    std::cout << "+";
    for (size_t i = 0; i < 4; i++)
        std::cout << std::string(10, '-') << "+";
    std::cout << std::endl;
}

void print_header() {
    print_border();
    std::cout << "|" << std::right << std::setw(10) << "Index" << "|" << std::right << std::setw(10)
              << "First name" << "|" << std::right << std::setw(10) << "Last name" << "|"
              << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
    print_border();
}
