#include <iostream>
#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List{
private:
    static const int MAX = 10;
    Item items[MAX];
    int top;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    bool additem(const Item & item);
    void visit(void (*pf) (Item &));
    void show() const;
};

#endif