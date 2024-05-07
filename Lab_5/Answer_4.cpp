#include <iostream>
#include<cstring>
using namespace std;

int main() {
    int userValue;

    // allowing the user to enter the value between 5 and 10
    cout << "Please enter an integer value between 5 and 10: ";
    cin >> userValue;

    
    while (userValue < 5 || userValue > 10) {
        cout << "Invalid input! Please enter an integer value between 5 and 10: ";
        cin >> userValue;
    }

    // telling the user that their inputed value has been accepted
    cout << "You entered a valid value: " << userValue << endl;

    return 0;
}