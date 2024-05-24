#include "../inc/Fixed.hpp"

std::ostream& operator<<(std::ostream &os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        val = other.getRawBits();
    }

    return *this;
}

bool Fixed::operator>(const Fixed& other) {
    return (bool)(this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) {
    return (bool)(this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) {
    return (bool)(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) {
    return (bool)(this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) {
    return (bool)(this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) {
    return (bool)(this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed res;
    res.setRawBits(this->getRawBits() + other.getRawBits());
    return res;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed res;
    res.setRawBits(this->getRawBits() - other.getRawBits());
    return res;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed res;
    res.setRawBits(this->getRawBits() * other.getRawBits());
    return res;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed res;
    res.setRawBits(this->getRawBits() / other.getRawBits());
    return res;
}

Fixed& Fixed::operator++(void) {
    this->setRawBits(this->getRawBits() + (1 << this->fractBits));
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->setRawBits(this->getRawBits() + (1 << this->fractBits));
    return temp;
}

Fixed& Fixed::operator--(void) {
    this->setRawBits(this->getRawBits() - (1 << this->fractBits));
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->setRawBits(this->getRawBits() - (1 << this->fractBits));
    return temp;
}
