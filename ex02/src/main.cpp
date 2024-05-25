#include "../inc/Fixed.hpp"
#include <cstdio>

int main( void ) {
    Fixed a( 99 );
    Fixed b( 100 );
    Fixed const c( 101 );
    Fixed const d( b );

    printf("b is %d\n", b.getRawBits());
    printf("d is %d\n", d.getRawBits());

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
    std::cout << "b == d " << (b == d) << std::endl;
    std::cout << "a == b " << (a == b) << std::endl;
    std::cout << "a != b " << (a != b) << std::endl;
    std::cout << "b != d " << (b != d) << std::endl;

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

    std::cout << "min(c, d) " << Fixed::min(c, d) << std::endl;
    std::cout << "max(c, d) " << Fixed::max(c, d) << std::endl;

    return 0;
}
