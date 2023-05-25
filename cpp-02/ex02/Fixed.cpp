#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0) {}

Fixed::Fixed(const int other)
{
    this->_fixedValue = other << this->_fractionalBits;
}

Fixed::Fixed(const float other)
{
    this->_fixedValue = roundf(other * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->_fixedValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed(void) {}

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

/* -- Overload comparison operators -- */

bool Fixed::operator>(const Fixed &other) const
{
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->getRawBits() != other.getRawBits();
}

/* -- Overload arithmetic operators -- */

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

/* -- Overload increment and decrement operators -- */

Fixed Fixed::operator++(void)
{
    ++this->_fixedValue;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_fixedValue++;
    return temp;
}

Fixed Fixed::operator--(void)
{
    --this->_fixedValue;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_fixedValue--;
    return temp;
}

/* -- Max and Min -- */

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}
