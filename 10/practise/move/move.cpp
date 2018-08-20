#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x: " << x 
              << ", y: " << y << std::endl;
    return;
}

Move Move::add(const Move & m) const
{
    Move move_temp(x + m.x, y + m.y);
    return move_temp;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}