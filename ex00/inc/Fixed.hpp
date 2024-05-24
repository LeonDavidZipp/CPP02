#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:
        Fixed( void );
        Fixed(Fixed& fixed);
        Fixed& operator=(const Fixed& otherFixed);
        ~Fixed( void );

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int val;
        static const int fractBits;
};

#endif
