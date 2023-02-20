#include "Contact.hpp"

std::string& Contact::getFirstName() {
    return first_name;
}

std::string& Contact::getLastName() {
    return last_name;
}

std::string& Contact::getNickname() {
    return nickname;
}

std::string& Contact::getPhoneNumber() {
    return phone_number;
}

std::string& Contact::getDarkestSecret() {
    return darkest_secret;
}

void Contact::setFirstName(std::string _first_name)
{
    first_name = _first_name;
}

void Contact::setLastName(std::string _last_name) {
    last_name = _last_name;
}

void Contact::setNickname(std::string _nickname) {
    nickname = _nickname;
}

void Contact::setPhoneNumber(std::string _phone_name) {
    phone_number = _phone_name;
}

void Contact::setDarkestSecret(std::string _darkest_secret) {
    darkest_secret = _darkest_secret;
}
