#include "../inc/Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "standard value -----------------" << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "toInt and toFloat -----------------" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    std::cout << "d is " << d.toFloat() << " as float" << std::endl;
    std::cout << std::endl;


    std::cout << "increment & decrement -------------------------" << std::endl;
    std::cout << "f: " << 5.05f * 2 << std::endl;
    Fixed e;
    std::cout << "e: " << e << std::endl;
    Fixed f( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << "f: " << f << std::endl;

    std::cout << "pre increment e: " << ++e << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "post increment e: " << e++ << std::endl;
    std::cout << "e: " << e << std::endl;

    std::cout << "pre decrement e: " << --e << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "post decrement e: " << e-- << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << std::endl;

    std::cout << "operators -------------------------" << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "e + f: " << e + f << std::endl;
    std::cout << "e - f: " << e - f << std::endl;
    std::cout << "e * f: " << e * f << std::endl;
    std::cout << "e / f: " << e / f << std::endl;
    try {
        std::cout << "edge case: div by zero 1 / 0: " << Fixed(1) / Fixed(0) << std::endl;
    } catch (std::exception &e) {
        std::cout << "exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "comparison -------------------------" << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "e > f: " << (e > f) << std::endl;
    std::cout << "e < f: " << (e < f) << std::endl;
    e = Fixed(f);
    std::cout << "e >= f: " << (e >= f) << std::endl;
    std::cout << "e <= f: " << (e <= f) << std::endl;
    std::cout << "e == f: " << (e == f) << std::endl;
    std::cout << "e != f: " << (e != f) << std::endl;
    e = Fixed(2);
    std::cout << "e != f: " << (e != f) << std::endl;
    std::cout << std::endl;

    std::cout << "max and min -------------------------" << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "for non const values: " << std::endl;
    std::cout << "max of " << e << " and " << f << ": " << Fixed::max(e, f) << std::endl;
    std::cout << "min of " << e << " and " << f << ": " << Fixed::min(e, f) << std::endl;
    std::cout << "for const values: " << std::endl;
    Fixed const y = Fixed(3);
    Fixed const z = Fixed(4);
    std::cout << "max of " << y << " and " << z << ": " << Fixed::max(y, z) << std::endl;
    std::cout << "min of " << y << " and " << z << ": " << Fixed::min(y, z) << std::endl;

    return 0;
}
