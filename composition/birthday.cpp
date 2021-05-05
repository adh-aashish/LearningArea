#include <iostream>
#include "birthday.h"

using namespace std;

Birthday::Birthday(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void Birthday::printBirthDay()
{
    cout<<"Date: "<< day <<" / " << month << " / " << year << endl;
}