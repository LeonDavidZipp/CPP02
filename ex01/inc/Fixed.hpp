#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed( void );
        Fixed( const int val);
        Fixed( const float val);
        Fixed( const Fixed& fixed);
        Fixed& operator=(const Fixed& other);
        // friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
        ~Fixed( void );

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        int toInt( void ) const;
        float toFloat( void ) const;

    private:
        int val;
        static const int fractBits;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif
