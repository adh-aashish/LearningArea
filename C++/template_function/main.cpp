#include <iostream>

using namespace std;

template <class Bucky, class Roberts>

Bucky smaller(Bucky a, Roberts b)
{
    return (a>b? a:b);
}

int  main()
{
    double a=3.65;
    int b=3;
    cout  << smaller(a,b) << endl;
}