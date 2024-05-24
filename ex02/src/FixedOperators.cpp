#include "../inc/Fixed.hpp"

std::ostream& operator<<(std::ostream &os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other) const {
    return this->getRawBits() > other.getRawBits();
}

Fixed Fixed::operator-(const Fixed& other) const {

}

Fixed Fixed::operator*(const Fixed& other) const {

}

Fixed Fixed::operator/(const Fixed& other) const {

}

Fixed& Fixed::operator++(void) {

}

Fixed Fixed::operator++(int) {

}

Fixed& Fixed::operator--(void) {

}

Fixed Fixed::operator--(int) {

}
