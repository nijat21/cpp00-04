#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Point &src) : x(src.x), y(src.y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point &Point::operator=(const Point &rhs) {
    if (this != &rhs) {
        this->x = rhs.x;
        this->y = rhs.y;
    }
    return (*this);
}

Point::~Point() {}

// Get float values
float Point::getFloatX() const {
    return x.toFloat();
}
float Point::getFloatY() const {
    return y.toFloat();
}
