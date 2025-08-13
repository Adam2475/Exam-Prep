#include "bigint.hpp"

bigint::bigint(const int num)
{
    this->number = to_string(num);
}

bigint::bigint(const bigint &src)
{
    this->number = src.number;
}

bigint &bigint::operator=(const bigint &ptref)
{
    if (this != &ptref)
    {
        this->number = ptref.number;
    }
    return *this;
}

ostream &operator<<(ostream &out, const bigint &src)
{
    cout << src.number;
    cout << &src;
    return out;
}