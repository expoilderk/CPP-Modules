#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "" << std::endl;
	std::cout << " -- Increment Operator -- " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Pre-increment a: " << ++a << std::endl;
	std::cout << "Value of a after pre-increment: " << a << std::endl;
	std::cout << "Post-increment a: " << a++ << std::endl;
	std::cout << "Value of a after post-increment: " << a << std::endl;

	std::cout << "" << std::endl;
	std::cout << " -- Max and Min -- " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "Value of b: " << b << std::endl;

	std::cout << "Maximum between a and b: " << Fixed::max(a, b) << std::endl;
	std::cout << "Minimum between a and b: " << Fixed::min(a, b) << std::endl;

	std::cout << "" << std::endl;
	std::cout << " -- Comparison Operator -- " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "a > b? " << (a > b) << std::endl;
	std::cout << "a < b? " << (a < b) << std::endl;
	std::cout << "a >= b? " << (a >= b) << std::endl;
	std::cout << "a <= b? " << (a <= b) << std::endl;
	std::cout << "a == b? " << (a == b) << std::endl;
	std::cout << "a != b? " << (a != b) << std::endl;

	std::cout << "" << std::endl;
	std::cout << " -- Aritmatic Operator -- " << std::endl;
	std::cout << "" << std::endl;

	Fixed c = a + b;
	std::cout << "a + b: " << c << std::endl;

	Fixed d = a - b;
	std::cout << "a - b: " << d << std::endl;

	Fixed e = a * b;
	std::cout << "a * b: " << e << std::endl;

	Fixed f = a / b;
	std::cout << "a / b: " << f << std::endl;

	std::cout << "" << std::endl;
	std::cout << " -- Decrement Operator -- " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "Pre-decrement a: " << --a << std::endl;
	std::cout << "Value of a after pre-decrement: " << a << std::endl;
	std::cout << "Post-decrement a: " << a-- << std::endl;
	std::cout << "Value of a after post-decrement: " << a << std::endl;

	return 0;
}
