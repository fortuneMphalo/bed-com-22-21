#include <iostream>
using namespace std;

int main(){
    int numberArray[5];
    int *pPointer = nullptr;

    //assign the address to the first element to the pointer
    pPointer = numberArray;
    *pPointer =10;//assigning the valu to the first element

    /*increment the pointer using the pointer arithmentic to assign the
    address of the element to the pointer*/
    pPointer++;
    *pPointer = 20; //assigning the value to the second element

    //assign the address of the third element to the pointer
    pPointer = &numberArray[2];
    *pPointer = 30; //assign a value to the third element

   /*Assign the address of the fourth element to the 
   pointer using areithmentic pointer*/
   pPointer = numberArray +3;
   *pPointer = 40;

   //assign the address to the first element to the pointer
   pPointer = numberArray;

   /*assign a value to the fifth element
   using indirection and pointer arithmentic*/
   *(pPointer+4)=50;

   /*iterate and output all the elements in the array*/
   for(int n = 0;n<5; n++){
    cout<<numberArray[n]<<", ";
   }

       return 0;
}