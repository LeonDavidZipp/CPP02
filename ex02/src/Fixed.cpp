#include "../inc/Fixed.hpp"

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

Fixed::Fixed( const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
