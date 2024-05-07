#include <iostream>
using namespace std;

int main(){
    //declare a pointer and initialize it
    //so that it doesnt store a random variable
    int* pPointer = nullptr;

    int integerVar = 5;

    //assign pointer to address object
    pPointer = &integerVar;

    //output the value of integerVar
    cout<<"integerVar : "<< integerVar<<endl;

    //output the  address of integerVar
    cout<<"THe address of integerVar  "<<&integerVar<<endl;

    //output the address assigned to pPointers
    cout<<"pPointer : "<<pPointer<<endl;

    //output the address of pPointer
    cout<<"Address of pPointer "<<&pPointer<<endl;

    return 0;
}