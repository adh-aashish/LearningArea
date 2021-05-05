#include <iostream>
#include "birthday.h"
#include "person.h"

using namespace std;


Person::Person(string name, Birthday bo)
:name(name), dateOfBirth(bo)
{
}

void Person::printInfo()
{
    cout<<"Remember the name: "<< name << endl;
    cout << "well if wanna remember he was born in: "<< endl;
    dateOfBirth.printBirthDay();
}