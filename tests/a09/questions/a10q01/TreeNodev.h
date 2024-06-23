#ifndef TREENODEV_H
#define TREENODEV_H

#include <iostream>
#include <vector>

template < typename T >
class TreeNodev
{
public:
    TreeNodev(const T & data,
              TreeNodev * parent=NULL)
              : _data(data), _parent(parent)
    {}
private:
    T _data;
    TreeNodev  * _parent;
    std::vector< TreeNodev * > _children;
};

#endif
