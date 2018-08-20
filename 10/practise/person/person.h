#include <string>
#include <cstring>
#ifndef PERSION_H_
#define PERSION_H_

class Person {
private:
    static const int LIMIT = 25;
    std::string lname_;       // Person's last name
    char fname_[LIMIT];  // Person's first name
public:
    Person() {lname_ = ""; fname_[0] = '\0'; } // #1
    Person(const std::string & ln, const char * fn = "Heyyou");  // #2
// the following methods display lname and fname
    void Show() const;      // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};

#endif