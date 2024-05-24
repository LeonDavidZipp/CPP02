#include "../inc/Fixed.hpp"

int main( void ) {
    Fixed a( 99 );
    Fixed const b( 100 );
    Fixed const c( 101 );
    Fixed const d( b );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << "a > b " << (a > b) << std::endl;
    std::cout << "a < b " << (a < b) << std::endl;
    std::cout << "a >= b " << (a >= b) << std::endl;
    std::cout << "a <= b " << (a <= b) << std::endl;
    std::cout << "b == d " << (a == b) << std::endl;
    std::cout << "a == b " << (a == b) << std::endl;
    std::cout << "a != b " << (a != b) << std::endl;
    std::cout << "a != c " << (a != c) << std::endl;

    std::cout << "a + b " << (a + b) << std::endl;
    std::cout << "a - b " << (a - b) << std::endl;
    std::cout << "a * b " << (a * b) << std::endl;
    std::cout << "a / b " << (a / b) << std::endl;

    std::cout << "a before a++ " << a << std::endl;
    a++;
    std::cout << "a after a++ " << a << std::endl;

    std::cout << "a before ++a " << a << std::endl;
    ++a;
    std::cout << "a after ++a " << a << std::endl;

    std::cout << "a before a-- " << a << std::endl;
    a--;
    std::cout << "a after a-- " << a << std::endl;

    std::cout << "a before --a " << a << std::endl;
    --a;
    std::cout << "a after --a " << a << std::endl;

    std::cout << "min(a, b) " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b) " << Fixed::max(a, b) << std::endl;

    int r = 42;
    int s = 42;
    std::cout << "r == s " << (r == s) << std::endl;

    return 0;
}
