#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title):_name(name), _title(title) {
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock() {}

Warlock& Warlock::operator=(Warlock const& ref) {
    this->_name = ref._name;
    this->_title = ref._title;
    return *this;
}

Warlock::Warlock(Warlock const& ref) { *this = ref; }

Warlock::~Warlock() {
    std::cout << _name << ": My job here is done!" << std::endl;
}

// ---------------------------------------------------------------------------------------- //

std::string const& Warlock::getName() const { return(_name); }
std::string const& Warlock::getTitle() const { return(_title); }

void Warlock::setTitle(std::string const& title) { _title = title; }

// ---------------------------------------------------------------------------------------- //

void Warlock::introduce() const {
    std::cout << _name << ": I am" << _name << ", " << _title << "!" << std::endl;
}
