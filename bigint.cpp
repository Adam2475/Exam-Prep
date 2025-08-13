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

bigint bigint::operator+(const bigint &addend) const
{
    bigint result;
    bigint op1 = *this;
    bigint op2 = addend;
    reverse(op1.number.begin(), op1.number.end());
    reverse(op2.number.begin(), op2.number.end());
    cout << op1;
    cout << op2; 
    return result;
}


ostream &operator<<(ostream &out, const bigint &src)
{
    cout << src.number;
    return out;
}