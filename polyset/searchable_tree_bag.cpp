#include "searchable_tree_bag.hpp"

searchable_tree_bag::searchable_tree_bag()
{

}

searchable_tree_bag::~searchable_tree_bag()
{
    
}

searchable_tree_bag::searchable_tree_bag(const searchable_tree_bag &src)
{
    this->tree = src.tree;
}

searchable_tree_bag &searchable_tree_bag::operator=(const searchable_tree_bag &src)
{
    if (this != &src)
    {
        this->tree = src.tree;
    }
    return *this;
}

