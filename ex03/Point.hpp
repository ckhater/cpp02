#ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"

class Point{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(void);
        Point(const float x, const float y);
        Point(Point const &pt);
        Point &operator=(Point const &pt);
        ~Point(void);

};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif