#include <iostream>
#include "person.h"

Person::Person(const std::string & ln, const char * fn)
{
    lname_ = ln;
    strcpy(fname_, fn);
}

void Person::Show() const
{
    std::cout << "firstname: " << fname_ << std::endl;
    return;
}

void Person::FormalShow() const
{
    std::cout << "lastname: " << lname_ << std::endl;
    return;
}