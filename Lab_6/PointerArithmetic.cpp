#include <iostream>
using namespace std;

int main(){
    //null pointer
    int *pPointer = nullptr;

    int numberArray[3]={10,20,30};

    //assign address of first element to pointer
    pPointer = numberArray;

    //output the address the address of the first element
    cout<<"Address of pPointer: "<<pPointer<<endl;
      cout<<"Address of numberArray[0]: "<<numberArray<<endl;

      //This outputs the value of the second eleement
        cout<<"Address of ++pPointer: "<<(++pPointer)<<endl;

        //assign address of first element to pointer
        pPointer = numberArray;

        //This outputs the value of the first element
        cout<<"value at pPointer++: "<< *(pPointer++)<<endl;

        return 0;
}