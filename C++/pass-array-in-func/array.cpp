#include <iostream>

void EnterData(float arr[2]);
void ReadData(float arr[2]);

int main()
{
    float polly[2];
    EnterData(polly);
    ReadData(polly);
}

void EnterData(float arr[2])
{
    std::cout<<"Please enter the Data:"<<std::endl;
    for(int i=0; i<2;i++)
    {
        std::cin>>arr[i];
    }

}
void ReadData(float arr[2])
{
    std::cout<<"The entered datas are:"<<std::endl;
    for(int i=0; i<2; i++)
    {
        std::cout<< arr[i]<<"    ";
    }
}