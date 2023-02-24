#include "Fixed.hpp"

/* -- Default constructor -- */

Fixed::Fixed() : _fixedValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

/* -- Default constructor Int -- */

Fixed::Fixed(const int other) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedValue = other << this->_fractionalBits;
}

/* -- Default constructor Float -- */

Fixed::Fixed(const float other) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedValue = (int)(other * (1 << this->_fractionalBits) + 0.5);
}

/* -- Copy constructor by using copy assignment operator overload -- */

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

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

void Fixed::setRawBits(int const raw) {
    this->_fixedValue = raw;
}

/* -- Get -- */

int Fixed::getRawBits(void) const {
    return this->_fixedValue;
}

/* -- toInt -- */

int Fixed::toInt(void) const {
    return this->_fixedValue >> this->_fractionalBits;
}

/* -- toFloat -- */

float Fixed::toFloat(void) const {
    return (float)this->_fixedValue / (1 << this->_fractionalBits);
}

/* -- Overload << operator -- */

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    return os << fixed.toFloat();
}