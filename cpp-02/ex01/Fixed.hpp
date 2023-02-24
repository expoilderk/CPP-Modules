#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed	{
	private:
		int _value;
		static const int _fractionalBits = 8;
	public:
		Fixed(); //Construtor padrão
		Fixed(const int value); //Construtor com parametro const int
		Fixed(const float value); //Construtor com parametro const float
		Fixed(const Fixed& other); // Construtor de cópia
		Fixed& operator=(const Fixed& other); // Operador de atribuição
		~Fixed(); // Destrutor

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif // FIXED_HPP
