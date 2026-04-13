#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {
  private:
    Contact contacts[8];
    size_t count;

  public:
    PhoneBook() : count(0) {};
    void add(Contact new_contact);
    void print_contacts();
    void print_search_results(size_t f);
    size_t get_count();
};

#endif
