#include "Fixed.hpp"

/* -- Default constructor -- */

Fixed::Fixed() : _fixedValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

/* -- Copy constructor by using member initialization -- */

// Fixed::Fixed(const Fixed& other) : _fixedValue(other._fixedValue) {
//     std::cout << "Copy constructor called" << std::endl;
// }

/* -- Copy assignment operator overload -- */

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_fixedValue = other.getRawBits();
	}
	return *this;
}

/* -- Destructor -- */

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

/* -- Set -- */

void Fixed::setRawBits(int const raw)
{
    this->_fixedValue = raw;
}

/* -- Get -- */

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedValue;
}
