#include "Fixed.hpp"

// A default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Int Constructor
Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_fractionalBits;
}

// Float Constructor
Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)(value * (1 << this->_fractionalBits) + 0.5);
    // this->_value = (int)round(value * (1 << this->_fractionalBits));
}

// A copy constructor by using copy assignment operator overload.
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// A copy assignment operator overload.
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return *this;
}

// A destructor.
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

// Convert fixed-point to float
float Fixed::toFloat(void) const {
    return (float)this->_value / (1 << this->_fractionalBits);
}

// Convert fixed-point to int
int Fixed::toInt(void) const {
    return this->_value >> this->_fractionalBits;
}

// Overload << operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    return os << fixed.toFloat();
}

// Overload comparison operators
bool Fixed::operator>(const Fixed &other) const {
    return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed &other) const {
    return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed &other) const {
    return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->toFloat() != other.toFloat();
}

// Overload arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

// Overload increment and decrement operators
Fixed Fixed::operator++()
{
    this->_value += (1 << this->_fractionalBits);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_value += (1 << this->_fractionalBits);
    return temp;
}

Fixed Fixed::operator--()
{
    this->_value -= (1 << this->_fractionalBits);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_value -= (1 << this->_fractionalBits);
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}
