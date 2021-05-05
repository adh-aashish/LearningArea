#include <iostream>

using namespace std;

template <class T>
class HariBahadur
{
    private:
        T num;
    public:
        HariBahadur(T);
};

template <class T>
HariBahadur<T>::HariBahadur(T n)
{
    num = n;
    cout<< num <<" is not a character"<< endl;
}

template<>              //telling cpp that char is our special data and diff from generic
HariBahadur<char>::HariBahadur(char n)
{
    num = n;
    cout<< num << "  is a character"<< endl;
}

int main()
{
    HariBahadur<int> ob(13);
}