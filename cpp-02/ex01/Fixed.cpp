#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

/* Here we are converting an integer to
fixed-point format. This is done using the bit shift operator
shift operator (<<), which multiplies the number by a specific
factor. The bit shift represents the
decimal part of the number in fixed point format. The result is
stored to represent the value in fixed-point format. */

Fixed::Fixed(const int other)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedValue = other << this->_fractionalBits;
}

/* Here we are converting a floating point (float) number
to fixed point format. The floating point number is
multiplied by a specific factor, which is obtained by shifting
the bits to the left. This factor is determined by the value
stored in the "_fractionalBits" attribute. The result of the
result of the multiplication is rounded up to the nearest value and
then assigned to the "_fixedValue" attribute to represent
the value in fixed point format. */

Fixed::Fixed(const float other)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedValue = roundf(other * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_fixedValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedValue = raw;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedValue;
}

int Fixed::toInt(void) const
{
    return this->_fixedValue >> this->_fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)this->_fixedValue / (1 << this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    return os << fixed.toFloat();
}