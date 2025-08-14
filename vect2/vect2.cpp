#include "vect2.hpp"

vect2::vect2()
{
    this->x = 0;
    this->y = 0;
}

vect2::vect2(int x, int y)
{
    this->x = x;
    this->y = y;
}

vect2::vect2(const vect2 &src)
{
    this->x = src.x;
    this->y = src.y;
}

vect2 &vect2::operator=(const vect2 &ptref)
{
    if (this != &ptref)
    {
        this->x = ptref.x;
        this->y = ptref.y;
    }
    return *this;
}

vect2 vect2::operator++(int)
{
    vect2 old = *this;
    this->x++;
    this->y++;
    return old;
}

vect2 vect2::operator++()
{
    this->x++;
    this->y++;
    return *this;
}

vect2 vect2::operator--(int)
{
    vect2 old = *this;
    this->x--;
    this->y--;
    return old;
}

vect2 vect2::operator--()
{
    this->x--;
    this->y--;
    return *this;
}

ostream &operator<<(ostream &out, const vect2 &src)
{
    cout << "{" << src.x << ", " << src.y << "}";
    return out;
}