#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
     
    srand(static_cast<unsigned int>(time(nullptr)));//generating random numbers  
    int daysUntilExpiration=rand()%12; //generating random number and assigning it to the variable
                                      //daysUntilExpiration
    
    //if statement to check the days until expiration
      if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day!" <<endl;
        cout << "Renew now and save 20%!" <<endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days" <<endl;
        cout << "Renew now and save 10%!" <<endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" <<endl;
    } else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired." <<endl;
    } else {
        cout << "You have an active subscription." <<endl;
    }
    return 0;

         }