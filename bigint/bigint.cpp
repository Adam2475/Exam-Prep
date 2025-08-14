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
    string tmpResult;
    string op1 = this->number;
    string op2 = addend.number;
    reverse(op1.begin(), op1.end());
    reverse(op2.begin(), op2.end());
    // cout << "added " << op1;
    // cout << "addend " << op2;
    
    int tmp;
    int i = 0;

    char *string1 = (char *)op1.c_str();
    char *string2 = (char *)op2.c_str(); 

    char tmpChar1;
    char tmpChar2;

    int rest = 0;

    int res;

    int i1;
    int i2;

    int tmpInt1;
    int tmpInt2;

    while (op2[i] != '\0' && op1[i] != '\0')
    {
        tmpChar1 = (char)string1[i];
        tmpChar2 = (char)string2[i];
        // cout << "arg1 : " << tmpChar1 << "arg2 : " << tmpChar2 << endl;
        // tmpInt1 = atoi(&tmpChar1);
        // tmpInt2 = atoi(&tmpChar2);
        tmpInt1 = tmpChar1 - '0';
        tmpInt2 = tmpChar2 - '0';
        tmp = tmpInt1 + tmpInt2;
        //cout << "arg1 : " << tmpInt1 << "arg2 : " << tmpInt2 << endl;

        if (tmp < 10)
        {
            i1 = tmp / 10;
            i2 = tmp % 10;
            rest = 1;
            tmp = i2;
        }
        tmpResult += tmp + '0';
        // cout << "for i = " << i << ": " << atoi(&string1[i]);
        i++;
    }
    reverse(tmpResult.begin(), tmpResult.end());
    // cout << "result" << tmpResult << endl;
    result.number = tmpResult;
    return result;
}


ostream &operator<<(ostream &out, const bigint &src)
{
    cout << src.number;
    return out;
}