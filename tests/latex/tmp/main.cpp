#include <iostream>
#include <string>

template < typename T >
class TN
{};

template < typename T >
class BinaryTreeNode
{
public:
    BinaryTreeNode(const T & data,
                   BinaryTreeNode< T > * left=NULL,
                   BinaryTreeNode< T > * right=NULL)
        : _data(data), _left(left), _right(right)
    {}
    void insert_left(const T & data)
    {
        BinaryTreeNode< T > * p = new BinaryTreeNode< T >(data);
        _left = p;
    }
private:
    T _data;
    BinaryTreeNode * _left;
    BinaryTreeNode * _right;
};

template < typename T >
int height(const TN< T > * const p)
{
    return 0;
}


template < typename T >
class X
{
public:
    X(const T & x,
      X< T > * const z=NULL)
        : _x(x),
          _z(z)
    {}
private:
    T _x;
    X< T > * _z;
};

int main()
{
    TN< int > t;
    height(&t);

    

    typedef BinaryTreeNode< std::string > btnode;
    BinaryTreeNode<std::string> * p = new BinaryTreeNode<std::string>("+");
    p->insert_left("1");
    
    X< std::string > x("test");
    return 0;
    
}
