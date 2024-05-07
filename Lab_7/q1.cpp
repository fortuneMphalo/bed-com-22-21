#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); //This is a Default constructor
    ~Rectangle(); // This is a destructor Destructor

    //Note the Accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    // these are Member function to calculate area
    float calculateArea() const;
};

#endif // RECTANGLE_H
Rectangle::Rectangle() : length(0), width(0) {}

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
           // Create an instance of Rectangle
               Rectangle rect;

    // Prompt user to enter length and width
    float length, width;
    cout << "Enter length of rectangle: "<<endl;
      cin >> length;
    cout << "Enter width of rectangle: "<<endl;
     cin >> width;

    // Set length and width using accessor methods
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate area and output
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
    
}



