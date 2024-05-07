#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square();
        Square(float side);
        ~Square();

        void setSideLength(float side);
        float getSideLength() const;
    };
}
#endif // SQUARE_H
namespace shapes {
    Square::Square() : sideLength(0.0) {}

    Square::Square(float side) : sideLength(side) {}

    Square::~Square() {}

    void Square::setSideLength(float side) {
        sideLength = side;
    }

    float Square::getSideLength() const {
        return sideLength;
    }
}

#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(float b, float h);
        ~Triangle();

        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;
    };
}

#endif // TRIANGLE_H
#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(float b, float h); // overload constructors
        ~Triangle();

        void setBase(float b);
        void setHeight(float h);
        float getBase() const;
        float getHeight() const;
    };
}

#endif // TRIANGLE_H

namespace shapes {
    Triangle::Triangle() : base(0.0), height(0.0) {}

    Triangle::Triangle(float b, float h) : base(b), height(h) {}

    Triangle::~Triangle() {}

    void Triangle::setBase(float b) {
        base = b;
    }

    void Triangle::setHeight(float h) {
        height = h;
    }

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }
}
#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle();
        Circle(float r);
        ~Circle();

        void setRadius(float r);
        float getRadius() const;
    };
}
#endif // CIRCLE_H
namespace shapes {
    Circle::Circle() : radius(0.0) {}

    Circle::Circle(float r) : radius(r) {}

    Circle::~Circle() {}

    void Circle::setRadius(float r) {
        radius = r;
    }

    float Circle::getRadius() const {
        return radius;
    }
}
#ifndef AREA_H
#define AREA_H
namespace shapes {
    class Area {
    public:
        static float calculateSquareArea(const Square& square);
        static float calculateTriangleArea(const Triangle& triangle);
        static float calculateCircleArea(const Circle& circle);
    };
}

#endif // AREA_H
#include <cmath>
     namespace shapes {
       float Area::calculateSquareArea(const Square& square) {
        float side = square.getSideLength();
        return side * side;
    }

    float Area::calculateTriangleArea(const Triangle& triangle) {
        float base = triangle.getBase();
        float height = triangle.getHeight();
        return 0.5 * base * height;
    }

    float Area::calculateCircleArea(const Circle& circle) {
        float radius = circle.getRadius();
        return M_PI * radius * radius;
    }
}

#include <iostream>
//#include <Square.h>
//#include <Triangle.h>
//#include <Circle.h>
//#include <Area.h>

using namespace shapes;
using namespace std;

int main() {
    int choice;
    bool exit = false;

    while (!exit) {
        cout << "Select an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
          cin >> choice;

        switch (choice) {
            case 1: {
                float side;
                 cout << "Enter the side length of the square: ";
                 cin >> side;
                Square square(side);
                float area = Area::calculateSquareArea(square);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case 2: {
                float base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                 cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                float area = Area::calculateTriangleArea(triangle);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 3: {
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                float area = Area::calculateCircleArea(circle);
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case 4:
                exit = true;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }

    return 0;
}
