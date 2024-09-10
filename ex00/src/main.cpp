#include "../inc/Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    Fixed d = a;

    c = b;

    std::cout << "--------------------------------" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << d.getRawBits() << std::endl;

    std::cout << "--------------------------------" << std::endl;
    a.setRawBits(42);
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << d.getRawBits() << std::endl;
    std::cout << "--------------------------------" << std::endl;

    return 0;
}
