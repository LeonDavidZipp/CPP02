#include "../inc/Fixed.hpp"

std::ostream& operator<<(std::ostream &os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool operator>(const Fixed& otherFixed);
bool operator<(const Fixed& otherFixed);
bool operator>=(const Fixed& otherFixed);
bool operator<=(const Fixed& otherFixed);
bool operator==(const Fixed& otherFixed);
bool operator!=(const Fixed& otherFixed);

Fixed	operator+(Fixed const &other) const;
Fixed	operator-(Fixed const &other) const;
Fixed	operator*(Fixed const &other) const;
Fixed	operator/(Fixed const &other) const;

Fixed&	operator++(void);
Fixed	operator++(int);
Fixed&	operator--(void);
Fixed	operator--(int);