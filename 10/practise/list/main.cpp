#include <iostream>
#include "list.h"

void Double(Item & item);

int main()
{
    List l1;
    l1.isempty();
    l1.isfull();
    l1.show();
    for (int i = 1; i < 11; i++)
        l1.additem(i);
    l1.isfull();
    l1.show();
    l1.visit(Double);
    l1.show();
    return 0;
}

void Double(Item & item)
{
    item *= 2;
    return;
}