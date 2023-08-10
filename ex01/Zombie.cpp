#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Zombie " << this->_name << " Created" << std::endl;
}

Zombie::Zombie(std::string) {
	std::cout << "Zombie " << this->_name << " Created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->_name << " Killed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}