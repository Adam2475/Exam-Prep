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

