#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Rectangle rect; //Rectangle Object
    Triangle trgl;  //Triangle object

    rect.setValues(4, 5); //Calling setValue function
    trgl.setValues(4, 5);//Calling setValue for Triangle

    cout <<"The area of Rectangle is "<<rect.Area() <<"m^2"<< '\n';
    cout <<"The area of Triangle is "<<trgl.Area() <<"m^2" <<'\n';
    return 0;
}