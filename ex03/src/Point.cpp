#include "../inc/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other.getX()), _y(other.getY()) {}

Point::~Point() {}

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        const_cast<Fixed&>(_x) = other._x;
        const_cast<Fixed&>(_y) = other._y;
    }
    return *this;
}
