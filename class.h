//#pragma once
//#include <string>
//
//class Point
//{
//private:
//    static int m_numberOfPoints;
//    std::string m_name;
//    double m_x;
//    double m_y;
//public:
//    static int numberOfPoints();
//    Point();
//    Point(const std::string& name, double x = 0, double y = 0);
//    ~Point();
//    void setName(const std::string& name);
//    void setXY(double x, double y);
//    double getX();
//    double getY();
//    void show() const;
////    static float degree();
////    const Point& distant(const Point& p) const;
////    double distance(const Point &p);
//    double vector(const Point& p);
//};

#pragma once
#include <string>
using namespace std;

class Vector {
private:
    double v_x;
    double v_y;
    Vector();
    Vector(double x = 0, double y = 0);

public:
    void XY(double x, double y);
    double getX();
    double getY();
    void answer();
    double length();
    double angle();
    static Vector Angleway(double length, double angle);
    static Vector XYcordinates(double x, double y);
};