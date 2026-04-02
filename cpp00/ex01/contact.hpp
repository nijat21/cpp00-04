#ifndef CONTACT_H
#define CONTACT_H

#include <string>

struct ContactInput {
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class Contact {
  private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

  public:
    void set_first_name(std::string str);
    void set_last_name(std::string str);
    void set_nickname(std::string str);
    void set_phone_number(std::string str);
    void set_darkest_secret(std::string str);
    void add(ContactInput contact);
}

#endif
