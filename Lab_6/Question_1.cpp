#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int *dynamicInteger = new int;
    cout<<"Enter an integer value ";
    cin>>*dynamicInteger;

    string *dynamicString = new string;
    cout<<"Enter a new string: ";
    cin.ignore();
   cin>>*dynamicString; //getline(cin, *dynamicInteger);

   cout<<"Dynamically allocated integer: "<<*dynamicInteger<<endl;
   cout<<"Dynamically allocated stringhr: "<<*dynamicString<<endl;

 return 0; 
}