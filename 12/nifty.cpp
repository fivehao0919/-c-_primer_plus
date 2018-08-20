#include <iostream>
#include "nifty.h"

Nifty::Nifty()
{
    
    personality = NULL;
    talents = 0;
}
  
Nifty::Nifty(char * s) 
{ 
    personality = new char[std::strlen(s) + 1]; 
    std::strcpy(personality,s);
    talents = 0; 
}
 
Nifty::~Nifty() 
{ 
    delete [] personality;
}

std::ostream & operator<<(std::ostream & os, Nifty & n) 
{ 
    os << n.personality; 
    return os;
}