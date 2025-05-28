#include"Point.hpp"

Point::Point(void):x(0),y(0){
    std::cout << "Default constructor called"<< std::endl;
}

Point   &Point::operator=(Point const &pt){
    std::cout << "Copy assignement called"<< std::endl;
}

Point::Point(const float x, const float y){
    std::cout << "Constructor called"<< std::endl;
}

Point::Point(Point const &pt){

}

Point::~Point(void){

}