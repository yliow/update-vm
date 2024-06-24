#include <iostream>

class X
{
public:
    int & key()
    {
        return key_;
    }
    const int & key() const
    {
        std::cout << "2 ";
        return key_;
    }
    int key_;
};

std::ostream & operator<<(std::ostream & cout, const X & x)
{
    cout << x.key();
    return cout;
}

int main()
{
    X x;
    x.key() = 0;
    std::cout << x << '\n';
    return 0;
}
