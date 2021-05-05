#include <iostream>
#include "header.h"

ConstMember::ConstMember(int a, int b)  //weird syntax : this constructor takes two variable and initialize
: regvar(a),                           // them to regvar and constvar           
constvar(b)
{
}

void ConstMember::printCrap()
{
    std::cout<< "the regualar variable is "<< regvar<<std::endl;
    std::cout<< "the constant variable is "<< constvar<<std::endl;
}