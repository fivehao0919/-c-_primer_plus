#include <iostream>
#include "plorg.h"

void Plorg::change_CI(int n)
{
    CI_ = n;
    return;
}

void Plorg::show_CI() const
{
    std::cout << "name: " << name_
         << ", CI :" << CI_ << std::endl;
    return;
}