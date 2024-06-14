#include <iostream>
#include "class.h"
#include <cmath>
using namespace std;

//Vector::Vector() {
//    v_x = 0;
//    v_y = 0;
//}
//
//Vector::Vector(double x, double y) {
//    v_x = x;
//    v_y = y;
//}
//
//void Vector::XY(double x, double y) {
//    v_x = x;
//    v_y = y;
//}
//
//double Vector::getX() {
//    return v_x;
//}
//
//double Vector::getY() {
//    return v_y;
//}
//
//double Vector::length() {
//    return sqrt(v_x*v_x+v_y*v_y);
//}
//
//double Vector::angle() {
//    double angle_rad=atan2(v_y,v_x);
//    double angle_deg = (angle_rad*180) / M_PI;
//    return angle_deg;
//}
//
//Vector Vector::Angleway(double length, double angle){
//    double angleRAD = angle * M_PI / 180;
//    double v_laY= length * sin(angleRAD);
//    double v_laX= length * cos(angleRAD);
//    return Vector(v_laX, v_laY);
//}
//Vector Vector::XYcordinates(double x, double y) {
//    return Vector(x, y);
//}
//void Vector::answer() {
//    cout << "Vector coordinates "<< v_x << ","<<v_y << endl;
//}
int Point::m_numberOfPoints = 0;

Point::Point() {
    m_name = "basic point";
    m_x = 0;
    m_y = 0;
    Point::m_numberOfPoints++;
}
//punkt nadany przez użytkownika
Point::Point(const std::string& name, double x, double y) {
    m_name = name;
    m_x = x;
    m_y = y;
    Point::m_numberOfPoints++;
}

Point::~Point() {
    Point::m_numberOfPoints--;
}

void Point::setName(const std::string& name) {
    m_name = name;
}

void Point::setXY(double x, double y) {
    m_x = x;
    m_y = y;
}

double Point::getX() {
    return m_x;
}

double Point::getY() {
    return m_y;
}

void Point::show() const {
    std::cout << "Point: " << m_name << "(" << m_x << ", " << m_y << ")" << std::endl;
}

int Point::numberOfPoints() {
    return Point::m_numberOfPoints;
}