#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Sally ob2(3); 
    Sally ob3(5);
    Sally ob1;
    ob1 = ob3-ob2;
    cout << "answer : " << ob1.num <<endl;
}