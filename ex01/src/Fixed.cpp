#include "../inc/Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed() {
    val = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val) {
    std::cout << "Int constructor called" << std::endl;
    this->val = val << fractBits;
}

Fixed::Fixed( const float val) {
    std::cout << "Float constructor called" << std::endl;
    this->val = (int)roundf(val * (1 << fractBits));
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other) {
        val = other.getRawBits();
    }

    return *this;
}

std::ostream& operator<<(std::ostream &os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed::Fixed( const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    return val;
}

void Fixed::setRawBits(int const raw) {
    val = raw;
}

int Fixed::toInt() const {
    return val >> fractBits;
}

float Fixed::toFloat() const {
    return (float)val / (1 << fractBits);
}
