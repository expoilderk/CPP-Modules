#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed	{
	private:
		int _value;
		static const int _fractionalBits = 8;
	public:
		Fixed(); //Construtor padrão
		Fixed(const Fixed& other); // Construtor de cópia
		Fixed& operator=(const Fixed& other); // Operador de atribuição
		~Fixed(); // Destrutor

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif // FIXED_HPP
