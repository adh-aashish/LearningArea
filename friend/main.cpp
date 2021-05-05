#include <iostream>

using namespace std;

class StinkyClass
{
    private:
        int num;
    public:
        StinkyClass(){
            num = 99;
        }
    friend void stinkyFriend(StinkyClass ob); //to make a func friend write its prototype
};                                            //in the class  

void stinkyFriend(StinkyClass ob)
{
    cout << "The number is : " << ob.num << endl; //since this function is friend of class
}                                         //it can access variable and stuffs from the class              

int main()
{
    StinkyClass ob;
    stinkyFriend(ob);
}