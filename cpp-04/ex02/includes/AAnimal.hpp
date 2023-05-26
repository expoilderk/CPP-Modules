#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

	void setType(std::string const raw);
	std::string getType(void) const;

	virtual void makeSound(void) const = 0;
};

#endif // AANIMAL_HPP
