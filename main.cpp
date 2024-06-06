#include <iostream>
#include "class.h"
#include <cmath>
#include <string>

using namespace std;

// Base class for shapes
class Shape {
public:
    static int shapeCounter;

    Shape(const std::string& name) : name(name) {
        shapeCounter++;
    }

    virtual ~Shape() {
        shapeCounter--;
    }

    virtual double perimeter() const = 0;
    virtual double area() const = 0;

    std::string getName() const { return name; }

    static int getShapeCount() {
        return shapeCounter;
    }

    static Shape& largerArea(Shape& s1, Shape& s2) {
        return (s1.area() > s2.area()) ? s1 : s2;
    }

protected:
    std::string name;
};

int Shape::shapeCounter = 0;

// Derived class for circles
class Circle : public Shape {
public:
    Circle(const std::string& name, double radius) : Shape(name), radius(radius) {}

    double perimeter() const override {
        return 2 * M_PI * radius;
    }

    double area() const override {
        return M_PI * radius * radius;
    }

private:
    double radius;
};

// Derived class for squares
class Square : public Shape {
public:
    Square(const std::string& name, double side) : Shape(name), side(side) {}

    double perimeter() const override {
        return 4 * side;
    }

    double area() const override {
        return side * side;
    }

private:
    double side;
};

// Derived class for rectangles
class Rectangle : public Shape {
public:
    Rectangle(const std::string& name, double side1, double side2) : Shape(name), side1(side1), side2(side2) {}

    double perimeter() const override {
        return 2 * (side1 + side2);
    }

    double area() const override {
        return side1 * side2;
    }

private:
    double side1, side2;
};

int main()
{
    Point points[10] = {
            Point("P1", 0, 0),
            Point("P2", 10, 20),
            Point("P3", 30, 40)
    };

    cout << "Istnieje " << Point::numberOfPoints() << " punktow."<< endl;

    for (int i = 0; i < 10; i++)
    {
        points[i].show();
    }

    {
        Point p1, p2, p3;
        cout << endl;
        cout << "Teraz istnieje " << Point::numberOfPoints() << " punktow." << endl;
    }

    cout << "A teraz istnieje " << Point::numberOfPoints() << " punktow." << endl;

    Circle circle("Circle 1", 5.0);
    Square square("Square 1", 4.0);

    std::cout << circle.getName() << ": Perimeter = " << circle.perimeter() << ", Area = " << circle.area() << std::endl;
    std::cout << square.getName() << ": Perimeter = " << square.perimeter() << ", Area = " << square.area() << std::endl;

    Shape& s = Shape::largerArea(circle, square);
    std::cout << "Shape with larger area: " << s.getName() << std::endl;

}
