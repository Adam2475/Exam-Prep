#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>
#include <string>

using namespace std;

class bigint {
    public:
        string number;
        bigint() {};
        bigint(const int num);
        ~bigint() {};
        bigint(const bigint &src);
        bigint &operator=(const bigint &ptref);
    private:
};

ostream &operator<<(ostream &out, const bigint &src);

#endif