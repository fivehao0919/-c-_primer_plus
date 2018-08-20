#include <iostream>
#include <cstring>
#ifndef PLORG_H_
#define PLORG_H_

class Plorg{
private:
    static const int LIMIT = 19;
    char name_[LIMIT];
    int CI_;
public:
    Plorg() { strcpy(name_, "Plorga"); CI_ = 50;}
    Plorg(char * ch) { strcpy(name_, ch); CI_ = 50;};
    void change_CI(int n);
    void show_CI() const;

};

#endif