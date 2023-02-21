#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie stackZombie("Marvin");
	stackZombie.announce();

	Zombie* heapZombie = newZombie("Thor");
	heapZombie->announce();

	randomChump("Trillian");
	randomChump("Prosser");
	randomChump("Arthur Dent");
	randomChump("Wowbagger");

	delete heapZombie;

	return 0;
}
