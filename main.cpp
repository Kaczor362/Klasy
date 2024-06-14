#include <iostream>
#include "class.h"
#include <cmath>
#include <string>

using namespace std;



int main(){
    Vector v1 = Vector::Angleway(5, 3);
    v1.answer();
    Vector v2 = Vector::XYcordinates(7, 9);
    v2.answer();
    return 0;
}
//
//// Base class for shapes
//class Shape {
//private:
//    std::string name;
//
//public:
//    static int shapeCounter;
//
//    Shape(const std::string& name) : name(name) {
//        shapeCounter++;
//    }
//
//    ~Shape() {
//        shapeCounter--;
//    }
//
//    virtual double lenght() const = 0;
//    virtual double area() const = 0;
//
//    std::string getName() const { return name; }
//
//    static int getShapeCount() {
//        return shapeCounter;
//    }
//
//    static Shape& largerArea(Shape& s1, Shape& s2, Shape& s3) {
//        Shape* largest = &s1; // Załóżmy, że s1 ma największe pole na początek
//
//        if (s2.area() > largest->area()) {
//            largest = &s2;  // Jeśli s2 jest większe, to teraz jest największe
//        }
//
//        if (s3.area() > largest->area()) {
//            largest = &s3;  // Jeśli s3 jest większe, to teraz jest największe
//        }
//
//        return *largest; // Zwróć referencję do figury o największym polu
//    }
//};
//
//
//int Shape::shapeCounter = 0;
//
//class Circle : public Shape {
//public:
//    Circle(const std::string& name, double radius) : Shape(name), radius(radius) {}
//
//    double lenght() const override {
//        return 2 * M_PI * radius;
//    }
//
//    double area() const override {
//        return M_PI * radius * radius;
//    }
//
//private:
//    double radius;
//};
//
//class Square : public Shape {
//public:
//    Square(const std::string& name, double side) : Shape(name), side(side) {}
//
//    double lenght() const override {
//        return 4 * side;
//    }
//
//    double area() const override {
//        return side * side;
//    }
//
//private:
//    double side;
//};
//
//class Rectangle : public Shape {
//public:
//    Rectangle(const std::string& name, double side1, double side2) : Shape(name), side1(side1), side2(side2) {}
//
//    double lenght() const override {
//        return 2 * (side1 + side2);
//    }
//
//    double area() const override {
//        return side1 * side2;
//    }
//
//private:
//    double side1, side2;
//};
//class Vector {
//public:
//    static int vectorCounter;
//    Vector(const std::string& name, Point& p) : name(name) {
//        vectorCounter++;
//    }
//
//    ~Vector() {
//        vectorCounter--;
//    }
//
//    Vector(const std::string& name, double m_x, double m_y) : axisX(m_x), axisY(m_y){}
//
//    double vector_lenght() {
//
////        return sqrt((p.m_x - axisX) * (p.m_x - axisX) + (p.m_y - axisY) * (p.m_y - axisY));
//    }
//
//    static int getvectorCounter() {
//        return vectorCounter;
//    }
//private:
//    std::string name;
//    double axisX,axisY;
//};
//
//
//
//int main()
//{
//    Point points[10] = {
//            Point("P1", 0, 0),
//            Point("P2", 10, 20),
//            Point("P3", 30, 40)
//    };
//
//    cout << "Istnieje " << Point::numberOfPoints() << " punktow."<< endl;
//
//    for (int i = 0; i < 4; i++)
//    {
//        points[i].show();
//    }
//
//    {
//        Point p1, p2, p3;
//        cout << endl;
//        cout << "Teraz istnieje " << Point::numberOfPoints() << " punktow." << endl;
//    }
//
//    cout << "A teraz istnieje " << Point::numberOfPoints() << " punktow." << endl;
//
//    Circle circle("Circle 1", 5.0);
//    Square square("Square 1", 4.0);
//    Rectangle rectangle("Rectangle", 4.5 , 5.5);
//
//    std::cout << circle.getName() << ": lenght = " << circle.lenght() << ", Area = " << circle.area() << std::endl;
//    std::cout << square.getName() << ": lenght = " << square.lenght() << ", Area = " << square.area() << std::endl;
//    std::cout << rectangle.getName() << ": lenght = " << rectangle.lenght() << ", Area = " << rectangle.area() << std::endl;
//
//    Shape& s = Shape::largerArea(circle, square, rectangle);
//    std::cout << "Shape with larger area: " << s.getName() << std::endl;
//}