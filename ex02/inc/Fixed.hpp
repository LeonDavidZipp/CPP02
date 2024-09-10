#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed( const int val);
        Fixed( const float val);
        Fixed( const Fixed& fixed);
        Fixed& operator=(const Fixed& otherFixed);
        ~Fixed();

        Fixed operator+(const Fixed& otherFixed);
        Fixed operator-(const Fixed& otherFixed);
        Fixed operator*(const Fixed& otherFixed);
        Fixed operator/(const Fixed& otherFixed);

        bool operator>(const Fixed& otherFixed);
        bool operator<(const Fixed& otherFixed);
        bool operator>=(const Fixed& otherFixed);
        bool operator<=(const Fixed& otherFixed);
        bool operator==(const Fixed& otherFixed);
        bool operator!=(const Fixed& otherFixed);

        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static const Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);

        int getRawBits() const;
        void setRawBits( int const raw );

        int toInt() const;
        float toFloat() const;

    private:
        int val;
        static const int fractBits;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif
