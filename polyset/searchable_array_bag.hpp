#pragma once

#include "array_bag.hpp"
#include "searchable_bag.hpp"

class searchable_array_bag: public array_bag, public searchable_bag
{
    private:
    public:
        searchable_array_bag();
        searchable_array_bag(const searchable_array_bag &src);
        ~searchable_array_bag();
        searchable_array_bag &operator=(const searchable_array_bag &src);
        // overriding virtual function from parent
        bool has(int) const override;
};
