#include "../inc/Fixed.hpp"

const int Fixed::fractBits = 8;

int Fixed::getRawBits() const {
    return (int)val;
}

void Fixed::setRawBits(int const raw) {
    val = raw;
}
