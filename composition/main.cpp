#include <iostream>
#include "birthday.h"
#include "person.h"

using namespace std;

int main()
{
    Birthday dob(15, 2, 2001);
    dob.printBirthDay();
    Person  p1("Aashish", dob);
    p1.printInfo();
}