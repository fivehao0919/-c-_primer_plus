#include <iostream>
#include "move.h"

int main()
{
    Move m1(1, 2);
    m1.showmove();
    Move m2(3, 4);
    m2.showmove();
    m1.add(m2).showmove();
    m1.reset();
}