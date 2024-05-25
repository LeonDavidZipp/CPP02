#include "../inc/Fixed.hpp"

int Fixed::toInt() const {
    return val >> fractBits;
}

float Fixed::toFloat() const {
    return (float)val / (1 << fractBits);
}
