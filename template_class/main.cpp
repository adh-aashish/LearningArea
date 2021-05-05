#include <iostream>

using namespace std;

template <class T>
class Bucky 
{
    T first, second;
    public:
        Bucky(T,T);
        T bigger();
};

template <class T>


Bucky<T>::Bucky(T a, T b)
{
    first = a;
    second = b;
}

template <class T>
T Bucky<T>::bigger()
{
    return (first>second? first:second);
}

int main()
{
    Bucky<int> bo(69,10);
    cout << bo.bigger()<<endl;
}