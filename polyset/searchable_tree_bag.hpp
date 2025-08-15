#pragma once

#include "tree_bag.hpp"
#include "searchable_bag.hpp"

class searchable_tree_bag: public tree_bag, public searchable_bag
{
    private:
    public:
        searchable_tree_bag();
        searchable_tree_bag(const searchable_tree_bag &src);
        ~searchable_tree_bag();
        searchable_tree_bag &operator=(const searchable_tree_bag &src);
        // overriding virtual function from parent
        bool has(int) const override;
};
