#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{  
    std::cout << "\n";
    const Animal *animal = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wrongcat = new WrongCat();

    std::cout << "\n";
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    // will output the cat and dog sound, because makeSound() is a virtual function!
    std::cout << "\n";
    cat->makeSound();
    dog->makeSound();
    animal->makeSound();

    // will don't output the wrongcat sound, because makeSound() is not virtual function!
    std::cout << "\n";
    wrongcat->makeSound();

    std::cout << "\n";
    delete cat;
    delete dog;
    delete animal;
    delete wrongcat;

    return 0;
}
