#include<iostream>
using namespace std;

int main(){
    string myList[8];

//Declaring an array of eight elements
    myList[0]="B123";
    myList[1]="C234";
    myList[2]="A345";
    myList[3]="C15";
    myList[4]="B177";
    myList[5]="G3003";
    myList[6]="C235";
    myList[7]="B179";

//a for loop statement to iterate through out the array
//And the printing of all elements starting with 'B'
    for(int i=0; i<=7; i++){
        if(myList[i][0]=='B'){
            cout<<myList[i]<<endl;
        }
    }
    return 0;

}