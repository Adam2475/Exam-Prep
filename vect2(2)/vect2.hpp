#pragma once

#include <iostream>

using namespace std;

class vect2
{
    public:
        vect2();
        vect2(int x, int y);
        ~vect2();
        vect2(const vect2 &src);
        vect2 &operator=(const vect2 &src);
        vect2 operator++(int);
        vect2 &operator++();
        vect2 operator--(int);
        vect2 &operator--();

        vect2 operator*(int mult);
        vect2 operator*(const vect2 &src);
        vect2 &operator+=(const vect2 &src);
        vect2 &operator-=(const vect2 &src);
        vect2 operator+(const vect2 &src) const;
        vect2 operator-(const vect2 &src) const;

        bool operator==(const vect2 &src);
        bool operator!=(const vect2 &src);

        friend vect2 operator*(int x, const vect2 &src);

        int getY() const;
        int getX() const;
    private:
        int x;
        int y;
};

ostream &operator<<(ostream &out, const vect2 &src);