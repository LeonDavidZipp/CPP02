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

        Fixed operator>(const Fixed& otherFixed);
        Fixed operator<(const Fixed& otherFixed);
        Fixed operator>=(const Fixed& otherFixed);
        Fixed operator<=(const Fixed& otherFixed);
        Fixed operator==(const Fixed& otherFixed);
        Fixed operator!=(const Fixed& otherFixed);

        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

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
