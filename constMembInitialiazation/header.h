#ifndef HEADER_H
#define HEADER_H

class ConstMember
{
    public:
        ConstMember(int a, int b);
        void printCrap();

    private:
        int regvar;
        const int constvar; //initialisation of constant variable which is a class member is different 
};                                 

#endif