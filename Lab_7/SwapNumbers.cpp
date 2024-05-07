#include<iostream>
using namespace std;

void swapNumber(int& a, int& b)
{
     int temp = a;
     a= b;
     b= temp;
}
    

int main(){
    
    int varA = 25;
    int varB = 100;

    cout<<"varA before swaap: "<<varA<<endl;
    cout<<"varB before swap: "<<varB<<endl;

    swapNumber(varA,varB);


    cout<<"varA after swaap: "<<varA<<endl;
    cout<<"varB after swap: "<<varB<<endl;

    return 0;
}