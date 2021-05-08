#include <iostream>

using namespace std;

int main()                         //this program checks if the division is feasible
{
    try{
        int num1, num2;

        cout<<"Enter the first number"<<endl;
        cin>>num1;
        
        cout<<"Enter the second number"<<endl;
        cin>>num2;

        if (num2 == 0){
            throw 0;
        }

        cout << "the division of the number is :  "<< num1/num2 <<endl;

    }catch(int x){
        cout<<"you cant divide the number by : "<< x <<endl;    //catch ko argument ma throw ko value
    }

}