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
    this->val = roundf(val * (1 << fractBits));
}

Fixed::Fixed( const Fixed& fixed) {
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


Fixed& Fixed::operator=(const Fixed& otherFixed) {
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &otherFixed) {
        val = otherFixed.getRawBits();
    }

    return *this;
}

Fixed Fixed::operator+(const Fixed& otherFixed)
{
    Fixed newFixed;

    newFixed.setRawBits(this->getRawBits() + otherFixed.getRawBits());
    return newFixed;
}

Fixed Fixed::operator-(const Fixed& otherFixed) {
    Fixed newFixed;

    newFixed.setRawBits(this->getRawBits() - otherFixed.getRawBits());
    return newFixed;
}

Fixed Fixed::operator*(const Fixed& otherFixed) {
    Fixed newFixed;
    long long result = static_cast<long long>(this->getRawBits()) * static_cast<long long>(otherFixed.getRawBits());
    newFixed.setRawBits(static_cast<int>(result >> fractBits));
    return newFixed;
}

Fixed Fixed::operator/(const Fixed& otherFixed) {
    if (otherFixed.getRawBits() == 0) {
        throw std::runtime_error("Division by zero.");
    }
    Fixed newFixed;
    long long dividend = static_cast<long long>(this->getRawBits()) << fractBits;
    long long divisor = static_cast<long long>(otherFixed.getRawBits());
    newFixed.setRawBits(static_cast<int>(dividend / divisor));
    return newFixed;
}

bool Fixed::operator>(const Fixed& otherFixed) {
    return this->getRawBits() > otherFixed.getRawBits();
}

bool Fixed::operator<(const Fixed& otherFixed) {
    return this->getRawBits() < otherFixed.getRawBits();
}

bool Fixed::operator>=(const Fixed& otherFixed) {
    return this->getRawBits() >= otherFixed.getRawBits();
}

bool Fixed::operator<=(const Fixed& otherFixed) {
    return this->getRawBits() <= otherFixed.getRawBits();
}

bool Fixed::operator==(const Fixed& otherFixed) {
    return this->getRawBits() == otherFixed.getRawBits();
}

bool Fixed::operator!=(const Fixed& otherFixed) {
    return this->getRawBits() != otherFixed.getRawBits();
}

Fixed& Fixed::operator++() {
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed& Fixed::operator--() {
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->setRawBits(this->getRawBits() + 1);
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->setRawBits(this->getRawBits() - 1);
    return temp;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}

std::ostream& operator<<(std::ostream &os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
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
