#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int _data;
public:
	Fixed() : _data(0) {} //Construtor padrão
	Fixed(int data) : _data(data) {} // Construtor com parâmetro
	Fixed(const Fixed& other) : _data(other._data) {} // Construtor de cópia
	Fixed& operator=(const Fixed& other) {
		if (this != &other) {
			_data = other._data;
		}
		return *this;
	}
	~Fixed(); // Destrutor
};

#endif // FIXED_HPP
