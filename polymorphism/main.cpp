#include <iostream>

using namespace std;
/* -------------without polymorphism------------ 
class Enemy
{
    protected:
        int attackPower;
    public:
        void setAttack(int);    
};

void Enemy::setAttack(int p)
{
    attackPower = p;
}

class Ninja: public Enemy
{
    public:
        void printCrap();
};

void Ninja::printCrap() 
{
    cout<< "I'm a ninja. Ninja chop -"<<attackPower<<endl;
}

class Monster: public Enemy
{
    public:
        void printCrap();
};

void Monster::printCrap() 
{
    cout<< "I'm a Monster. Monster attack -"<<attackPower<<endl;
}

int  main()
{
    Ninja n;
    Monster m;

    Enemy *e1; 
    Enemy *e2;

    e1 = &n;   
    e2 = &m;

    e1->setAttack(49);
    n.printCrap();

    e2->setAttack(69);
    m.printCrap();

}
*/
class Enemy
{
    public:
        virtual void attack(int);    
};

class Ninja: public Enemy
{
    public:
        void attack(int );
};

void Ninja::attack(int a) 
{
    cout<< "I'm a ninja. Ninja chop -"<<a<<endl;
}

class Monster: public Enemy
{
    public:
        void attack(int);
};

void Monster::attack(int a) 
{
    cout<< "I'm a Monster. Monster attack -"<<a<<endl;
}

int  main()
{
    Ninja n;
    Monster m;

    Enemy *e1; 
    Enemy *e2;

    e1 = &n;   
    e2 = &m;

    e1->attack(12);    //same function attack() is producing different result in being 
    e2->attack(15);    //called by pointer pointing different object but of same type ie enemy

}