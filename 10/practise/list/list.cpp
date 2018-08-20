#include <iostream>
#include "list.h"

List::List()
{
    top = 0;
}

bool List::isempty() const
{
    if (top == 0)
        return true;
    else
        return false;
}

bool List::isfull() const
{
    if (top == MAX)
        return true;
    else
        return false;
}

bool List::additem(const Item & item)
{
    if (top == MAX)
    {
       std::cout << "List is full!!" << std::endl;
       return false;
    }
    items[top] = item;
    top++;
    return true;
}

void List::visit(void (*pf) (Item &))
{
    for(int i = 0; i < top;i++)
        pf(items[i]);
    return;
}

void List::show() const
{
    for(int i = 0; i < top;i++)
        std::cout << items[i] << std::endl;
    return;
}

