#include <iostream>
#include "TreeNodev.h"

int main()
{
    TreeNodev< int > n0(0);
    TreeNodev< int > n1(1,&n0);
    return 0;
}
