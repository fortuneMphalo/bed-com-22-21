#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;
    
public:
    Rectangle();
    Rectangle(float l, float w); // Overloaded constructor
    ~Rectangle();
    
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;
    
    float calculateArea() const;
};

#endif // RECTANGLE_H

Rectangle::Rectangle() : length(0.0), width(0.0) {}

Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}

#include <iostream>
using namespace std;
int main() {
    // First rectangle
    float length1, width1;
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;
    Rectangle rect1(length1, width1);   
      cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;
    
    // Second rectangle
    float length2, width2;
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
     cout << "Enter the width of the second rectangle: ";
    cin >> width2;
    Rectangle rect2(length2, width2);
    
    cout << "Area of the second rectangle: " << rect2.calculateArea() <<endl;
    
    return 0;
}
