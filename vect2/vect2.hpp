#ifndef VECT2_HPP
#define VECT2_HPP

#include <vector>
#include <iostream>

using namespace std;

class vect2 {
    private:
    public:
        int x;
        int y;
        vect2();
        vect2(int x, int y);
        vect2(const vect2 &src);
        vect2 &operator=(const vect2 &ptref);
        vect2 operator++(int);
        vect2 operator++();
        vect2 operator--(int);
        vect2 operator--();
};

ostream &operator<<(ostream &out, const vect2 &src);


#endif