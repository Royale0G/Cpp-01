#include "Zombie.hpp"

int main() {
	Zombie* zombie = new Zombie();
	zombie = zombie->newZombie("Zombie");
	zombie->announce();
	zombie->randomChump("Zombie");
	delete zombie;
	return 0;
}