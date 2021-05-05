#include <iostream>
void airthematic(float a, float b, char op){
    float result=0;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        
    case '*':
        result = a * b;
    case '/':
        result = a / b;
    default:
        break;
    }
    std::cout<< a << op << b <<" = "<< result << std::endl;

} 
int main(){
    float a=0.0, b=0.0;
    char op;
    std::cout<<"Enter two numbers.";
    std::cin>>a>>b;
    std::cout<<"Choose the operation you want to perform (+,-,*,/)";
    std::cin>>op;
    airthematic(a,b,op);     
    return  0;     
}