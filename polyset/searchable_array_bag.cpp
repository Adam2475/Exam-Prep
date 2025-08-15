#include "searchable_array_bag.hpp"

searchable_array_bag::searchable_array_bag()
{

}

searchable_array_bag::~searchable_array_bag()
{

}

searchable_array_bag::searchable_array_bag(const searchable_array_bag &src)
{
    this->data = src.data;
    this->size = src.size;
}

searchable_array_bag &searchable_array_bag::operator=(const searchable_array_bag &src)
{
    if (this != &src)
    {
        this->data = src.data;
        this->size = src.size;
    }
    return *this;
}

// implement has() by looping through data[] up to size (both are protected in array_bag).
bool searchable_array_bag::has(int x) const
{
    int i = 0;
    while(i < this->size)
    {
        if (data[i] == x)
            return true;
        i++;
    }
    return false;
}