#include "../inc/Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed() {
    val = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other) {
        val = other.getRawBits();
    }

    return *this;
}

Fixed::Fixed(Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return val;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    val = raw;
}