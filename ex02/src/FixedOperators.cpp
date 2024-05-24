#include "../inc/Fixed.hpp"

std::ostream& operator<<(std::ostream &os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other) {
        val = other.getRawBits();
    }

    return *this;
}

bool Fixed::operator>(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) {
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) {
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) {
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) {
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) {
    return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other) const {
    return this->getRawBits() + other.getRawBits();
}

Fixed Fixed::operator-(const Fixed& other) const {
    return this->getRawBits() - other.getRawBits();
}

Fixed Fixed::operator*(const Fixed& other) const {
    return this->getRawBits() * other.getRawBits();
}

Fixed Fixed::operator/(const Fixed& other) const {
    return this->getRawBits() / other.getRawBits();
}

Fixed& Fixed::operator++(void) {
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->setRawBits(this->getRawBits() + 1);
    return temp;
}

Fixed& Fixed::operator--(void) {
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->setRawBits(this->getRawBits() - 1);
    return temp;
}
