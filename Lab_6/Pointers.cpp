#include <iostream>
using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int *pPointers = nullptr;

    //assign the pointer  with the address of first value
    pPointers = &firstValue;
    *pPointers  = 10; //indirection

    //assign pointer with the address of second value
    pPointers = &secondValue;
     *pPointers  = 20;

     cout<<"first value "<<firstValue<<'\n';
    cout<<"second value "<<secondValue<<'\n';

    return 0;  
}