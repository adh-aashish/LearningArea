#include <iostream>

class FirstClass
{
    public:
        void log()
        {
            std::cout<<"This is the log."<<std::endl;
        }
};

int main()
{
    FirstClass FirstObj;
    FirstObj.log();
    return 0;
}
