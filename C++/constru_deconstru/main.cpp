#include <iostream>

using namespace std;

class Mother
{
    public:
        Mother();
        ~Mother();
};

Mother::Mother()
{
    cout<<"I'm the mother constructor."<<endl;
}

Mother::~Mother()
{
    cout<<"I'm the mother deconstructor."<<endl;
}

class Daughter: public Mother
{
    public:
        Daughter();
        ~Daughter();
};

Daughter::Daughter()
{
    cout<<"I'm the daughter constructor."<<endl;
}

Daughter::~Daughter()
{
    cout<<"I'm the daughter deconstructor."<<endl;
}
//even though daughter doesnot inherit constructor from mother but 
//still mother constructor gets called because before running derived class
//cpp first invokes all base classes 
int main()
{
    Daughter dau; 
}