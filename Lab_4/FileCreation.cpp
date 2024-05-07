#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //create and open text file
    ofstream MyFile("exampleFile.txt");

    //close the file
    MyFile.close();

    return 0;
}