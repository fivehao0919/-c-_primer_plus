#include <iostream>
#include "cow.h"

int main()
{
    Cow c1;
    //c1.ShowCow();
    Cow c2("wuhao", "fivehao", 1.1);
    c2.ShowCow();
//
    c1 = c2;
    c1.ShowCow();
    return 0;
}