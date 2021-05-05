#include <iostream>

using namespace std;

class Mother
{
    public:
        int publicv;
        void sayName();
    protected:
        int protectedv;
    private:
        int privatev;
};

void Mother::sayName()
{
    cout << "I'm Bastola" << endl;
}

class Daughter: public Mother
{
    public:
        void info();
};

void Daughter::info()
{
    publicv = 3;
    protectedv = 5;    //only  public and protected variable  is  inherited
}

int main()
{
    Mother mo;
    Daughter dau;
    mo.sayName();
    dau.sayName();
    mo.publicv = 3;    //but protected variable cannot be obtained from outside
    dau.publicv= 4;
}