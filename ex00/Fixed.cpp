#include "Fixed.hpp"

const int Fixed::raw = 8;

Fixed::Fixed(void) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
