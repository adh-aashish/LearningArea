#include <iostream>
#include <fstream> 

using namespace std;

/*
int main(){

    ofstream myfile;
    myfile.open("test.txt");

    myfile << "This is a wierd way to push the text in a file.\n";
    myfile.close();
    cin.get();
}
*/

int main(){

    ofstream myfile("test1.txt");  //passing as the constructor
    if (myfile.is_open()){
        myfile << "This is a wierd way to push the text in a file.\n";
    }
    myfile.close();
    cin.get();
}