#include <iostream>

using namespace std;


double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
    char choice;
    double base, height, length, width, side;

    do {
        cout << "Select the shape to calculate the area:" << endl;
        cout << "t - Triangle" << endl;
        cout << "r - Rectangle" << endl;
        cout << "s - Square" << endl;
        cout << "q - Quit" << endl;
        cin >> choice;

        switch (choice) {
            case 't':
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << "The area of the triangle is " << calculateTriangleArea(base, height) << endl;
                break;
            case 'r':
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "The area of the rectangle is " << calculateRectangleArea(length, width) << endl;
                break;
            case 's':
                cout << "Enter the side of the square: ";
                cin >> side;
                cout << "The area of the square is " << calculateSquareArea(side) << endl;
                break;
            case 'q':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid input. Please enter a valid option (t, r, s, q)." << endl;
        }
    } while (choice != 'q');

    return 0;
}

// definitions of comment 
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}
