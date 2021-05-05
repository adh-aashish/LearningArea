#include <iostream>

int fact(int x)
{
    if (x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

int main ()
{
    int x;
    std::cout<<"Find the factorial of?";
    std::cin>>x;
    std::cout<<fact(x)<<std::endl;
}