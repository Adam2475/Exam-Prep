#include "vect2.hpp"

vect2::vect2()
{
    this->x = 0;
    this->y = 0;
}

vect2::~vect2() {}

vect2::vect2(int x, int y)
{
    this->x = x;
    this->y = y;
}

int vect2::getY() const
{
    return this->y;
}

int vect2::getX() const
{
    return this->x;
}

vect2 vect2::operator++(int)
{
    vect2 old = *this;
    this->x++;
    this->y++;
    return old; 
}

vect2 &vect2::operator++()
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

vect2 &vect2::operator--()
{
    this->x--;
    this->y--;
    return *this; 
}

vect2 vect2::operator+(const vect2 &src) const
{
    vect2 copy;
    copy.x = this->x + src.getX();
    copy.y = this->y + src.getY();
    return copy;
}

vect2 vect2::operator-(const vect2 &src) const
{
    vect2 copy;
    copy.x = this->x - src.getX();
    copy.y = this->y - src.getY();
    return copy;
}

vect2 &vect2::operator+=(const vect2 &src)
{
    this->x = this->x + src.getX();
    this->y = this->y + src.getY();
    return *this;
}

vect2 &vect2::operator-=(const vect2 &src)
{
    this->x = this->x - src.getX();
    this->y = this->y - src.getY();
    return *this;
}

ostream &operator<<(ostream &out, const vect2 &src)
{
    out << "{ " << src.getX() << ", " << src.getY() << " }";
    return out;
}

vect2::vect2(const vect2 &src)
{
    this->x = src.x;
    this->y = src.y;
}

vect2 &vect2::operator=(const vect2 &src)
{
    if (this != &src)
    {
        this->x = src.x;
        this->y = src.y;
    }
    return *this;
}

vect2 vect2::operator*(int multi)
{
    vect2 copy;
    copy.x = this->getX() * multi;
    copy.y = this->getY() * multi;
    return copy;
}

vect2 vect2::operator*(const vect2 &src)
{
    vect2 copy;
    copy.x = this->getX() * src.getX();
    copy.y = this->getY() * src.getY();
    return copy;
}

vect2 operator*(int x, const vect2 &src)
{
    vect2 copy;
    copy.x = x * src.getX();
    copy.y = x * src.getY();
    return copy;
}

bool vect2::operator==(const vect2 &src)
{
    if (this->x == src.x && this->y == src.y)
        return true;
    else
        return false;
}

bool vect2::operator!=(const vect2 &src)
{
    if (this->x == src.x && this->y == src.y)
        return false;
    else
        return true;
}