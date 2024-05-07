#include <iostream>
using namespace std;

int main(){
    int a = 21;
    int b = 10;
    int c;

    if(a == b){
        cout<<"line 1, a is equal to b"<<endl;
    }else{
        cout<<"line 1, a is not equal to b"<<endl; 
    }

    if(a < b){
         cout<<"line 3, a is less than b"<<endl;
    }else{
         cout<<"line 3, a is not less than b"<<endl;
    }

    if(a > b){
         cout<<"line 5, a is greater than b"<<endl;
    }else{
         cout<<"line 5, a is not greater than b"<<endl;
    } 

    //changing of values
   // a = 21;
   // b = 10;
    //if(a <= b){
      //cout<<"line 4, a is less than or equal to b"<<endl;   
   // }

    //if(b >= a){
         cout<<"line 5, a is greater than or equal to b"<<endl;
    //}
}
