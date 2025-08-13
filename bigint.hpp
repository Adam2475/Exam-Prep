#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class bigint {
    public:
        string number;
        bigint() {};
        bigint(const int num);
        ~bigint() {};
        bigint(const bigint &src);
        bigint &operator=(const bigint &ptref);

        bigint operator+(const bigint &addend) const;
    private:
};

ostream &operator<<(ostream &out, const bigint &src);

#endif