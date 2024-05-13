#include <iostream>
using namespace std;

class Box {
public: 
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);
//overload
    Box operator+(const Box& b);

private:
    double length;
    double breadth;
    double height;
};

Box::Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight) {
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box() {}

double Box::GetVolume() {
    return length * breadth * height;
}

void Box::SetLength(double len){
    length = len;
}

void Box::SetBreadth(double bre){
    breadth = bre;
}

void Box::SetHeight(double hei){
    height = hei;
}

// overload + operator to add box objects
Box Box::operator+(const Box& b) {
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}

int main() {
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    // box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // volume of box 1
    volume = Box1.GetVolume();
    cout << "Volume of box 1: " << volume << endl;

    // volume of box 2
    volume = Box2.GetVolume();
    cout << "Volume of box 2: " << volume << endl;

    // add two objects as follows
    Box3 = Box1 + Box2;

    // volume of box 3
    volume = Box3.GetVolume();
    cout << "Volume of box 3: " << volume << endl;

    return 0;
}
