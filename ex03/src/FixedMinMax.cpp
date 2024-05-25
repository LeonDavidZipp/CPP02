#include "../inc/Fixed.hpp"

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2) {
    if (fixed1.getRawBits() < fixed2.getRawBits()) {
        return fixed1;
    }
    return fixed2;
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2) {
    if (fixed1.getRawBits() < fixed2.getRawBits()) {
        return fixed1;
    }
    return fixed2;
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2) {
    if (fixed1.getRawBits() > fixed2.getRawBits()) {
        return fixed1;
    }
    return fixed2;
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2) {
    if (fixed1.getRawBits() > fixed2.getRawBits()) {
        return fixed1;
    }
    return fixed2;
}
