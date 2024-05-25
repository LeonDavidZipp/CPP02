#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& other);
        Point& Point::operator=(const Point& other);

        const Fixed& getX() const;
        const Fixed& getY() const;

    private:
        const Fixed _x;
        const Fixed _y;
};

#endif
