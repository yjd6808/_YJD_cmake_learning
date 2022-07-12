#include "Point.h"

Point& Point::Add(const Point& other)
{
    this->x =+ other.x;
    this->y =+ other.y;
    return *this;
}