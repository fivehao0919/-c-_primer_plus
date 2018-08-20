#include <iostream>
#include "plorg.h"

int main()
{
    Plorg p1;
    p1.show_CI();
    p1.change_CI(1);
    p1.show_CI();
    
    char ch[19] = "fivehao";
    Plorg p2(ch);
    p2.show_CI();
    return 0;
}