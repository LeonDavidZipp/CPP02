#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int val);
        Fixed(const float val);
        Fixed(const Fixed& fixed);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        int toInt(void) const;
        float toFloat(void) const;

        Fixed& operator=(const Fixed& otherFixed);

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

        const static Fixed& min(Fixed const &fixed1, Fixed const &fixed2);
        static Fixed& min(Fixed& fixed1, Fixed& fixed2);

        const static Fixed& max(Fixed const &fixed1, Fixed const &fixed2);
        static Fixed& max(Fixed& fixed1, Fixed& fixed2);

    private:
        int val;
        static const int fractBits;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif
