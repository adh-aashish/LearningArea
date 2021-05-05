#include <iostream>
#include "header.h"

Sally::Sally()
{
}

Sally::Sally(int n)
{
    num = n;
    std::cout<<"actually a number was passed in it : "<< num << std::endl;
}

Sally Sally::operator-(Sally obj)
{
    Sally brandNew;
    brandNew.num = num - obj.num ;  //current object ko num - parameter ko num
    return (brandNew);
}