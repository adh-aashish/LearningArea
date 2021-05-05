#include <iostream>
#include <string>

using namespace std;

class MyClass
{
    //making variable private is good pp
    private:
        string name;
    //But to access it from main getter and setter is required
    public:
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name;
        }
    //This is basically workaround to access a private variable 
};

int main()
{
    MyClass myObj;
    myObj.setName("Aashish");
            std::cout<< "My name is "<< myObj.getName() <<std::endl;
}