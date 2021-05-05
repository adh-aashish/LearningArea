#include <iostream>
#include <string>

//for some reason string directive needs std::
using namespace std;

class MyClass
{
    public:
                                //Constructor takes same name as class
        MyClass(string name)    //Constructor ko body gets executed when obj are created
        {
            setName(name);
        }
        void setName(string x)
        {
            name  = x;
        }
        string getName()
        {
            return name;
        }
    private:
        string name;
};

int main()
{
    MyClass ob("Aashish"),ob1("Miss Luisiana");
    cout<<"Thats my name anyway, "<< ob.getName() << endl;
    cout<<"Thats her name anyway, "<< ob1.getName() << endl;
    return 0;
}
