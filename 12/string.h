// strngbad.h -- flawed string class definition
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class String
{
private:
    char * str;                     // pointer to string
    int len;                        // length of string
    static int num_strings;          // number of objects
public:
    String(const char * s);      // constructor
    String();                    // default constructor
    ~String();                   // destructor
// friend function
    friend std::ostream & operator<<(std::ostream & os,
                        const String & st);

    int length () const { return len; };
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend std::istream & operator>>(std::istream & is, String & st);
    char & operator[] (int i);
    const char & operator[] (int i) const;
    static int HowMany();
};
#endif