#include <iostream>
#include <cstring>
#include "cow.h"

using std::cout;
using std::endl;

Cow::Cow()
{
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    std::strcpy(name, nm);
    int len = std::strlen(ho);
    hobby = new char[len + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    std::strcpy(name, c.hobby);
    int len = std::strlen(c.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    if (name == c.name && hobby == c.hobby && weight == c.weight)
        return *this;
    delete [] hobby;
    std::strcpy(name, c.hobby);
    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << name << " " << hobby << " " << weight << endl;
}