#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "birthday.h"
using namespace std;

class Person
{
    private:
        string name;
        Birthday dateOfBirth;
    public:
        Person(string name, Birthday bo);
        void printInfo();
};

#endif