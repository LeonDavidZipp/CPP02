#include "../inc/Fixed.hpp"

Fixed::Fixed() {
    val = 0;
}

Fixed::Fixed( const int val) {
    this->val = (int)(val << fractBits);
}

Fixed::Fixed( const float val) {
    this->val = (int)roundf(val * (1 << fractBits));
}

Fixed::Fixed( const Fixed& fixed) {
    *this = fixed;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}
