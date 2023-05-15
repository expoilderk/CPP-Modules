#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *animal = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wrong = new WrongCat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    cat->makeSound(); // will output the cat sound!
    dog->makeSound();

    animal->makeSound();

    wrong->makeSound();

    delete cat;
    delete dog;
    delete animal;
    delete wrong;

    return 0;
}
