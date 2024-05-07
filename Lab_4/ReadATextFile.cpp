#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
    //creat and open a text
    ifstream myfile;
    string line;
     myfile.open("exampleFile.txt");

if(myfile.is_open()){
    while(getline(myfile,line)){
        cout<<line<<"\n";

    }
 //cout<<"Hello my file"<<endl;

    //close the file
    myfile.close();
}
else
    cout<<"error...!"<<endl;
    return 0;
}