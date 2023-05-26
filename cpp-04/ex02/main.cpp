#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << " === ABSTRACT TEST ERROR ===" << std::endl;
	std::cout << "" << std::endl;

	// should not compile
	// const AAnimal c;

	std::cout << "" << std::endl;
	std::cout << " === PDF TEST ===" << std::endl;
	std::cout << "" << std::endl;

	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	delete j;
	delete i;

	std::cout << "" << std::endl;
	std::cout << " === ARRAY TEST ===" << std::endl;
	std::cout << "" << std::endl;

	const AAnimal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}

	std::cout << "" << std::endl;
	std::cout << " === DEEP COPY TEST ===" << std::endl;
	std::cout << "" << std::endl;

	Cat tom;
	tom.getBrain()->setIdea("Jerry!");
	std::cout << "Tom Idea: " << tom.getBrain()->getIdea(0) << std::endl;
	Cat garfield(tom);
	std::cout << "Garfield Idea: " << garfield.getBrain()->getIdea(0) << std::endl;

	return 0;
}
