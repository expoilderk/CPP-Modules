#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

/* Aqui estamos convertendo um número inteiro para o formato
de ponto fixo. Isso é feito usando o operador de deslocamento
de bits para a esquerda (<<), que multiplica o número por um
fator específico. O deslocamento de bits representa a parte
decimal do número no formato de ponto fixo. O resultado é
armazenado para representar o valor no formato de ponto fixo. */

Fixed::Fixed(const int other)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedValue = other << this->_fractionalBits;
}

/* Aqui estamos convertendo um número em ponto flutuante (float)
para o formato de ponto fixo. O número em ponto flutuante é
multiplicado por um fator específico, que é obtido ao deslocar
os bits para a esquerda. Esse fator é determinado pelo valor
armazenado no atributo "_fractionalBits". O resultado da
multiplicação é arredondado para o valor mais próximo e,
em seguida, atribuído ao atributo "_fixedValue" para representar
o valor no formato de ponto fixo. */

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