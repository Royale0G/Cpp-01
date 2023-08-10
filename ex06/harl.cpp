#include "harl.hpp"

Harl::Harl( void ){
	std::cout << "Harl constructor called. :D" << std::endl;
}

Harl::~Harl( void ){
	std::cout << "Harl destructor called. :C" << std::endl;
}

void Harl::debug( void ){
	std::cout << "[DEBUG] This is a debug message." << std::endl;
}

void Harl::info( void ){
	std::cout << "[INFO] This is an info message." << std::endl;
}

void Harl::warning( void ){
	std::cout << "[WARNING] This is a warning message." << std::endl;
}

void Harl::error( void ){
	std::cout << "[ERROR] This is an error message." << std::endl;
}

void Harl::complain( std::string level ){
	void (Harl::*func[4])()= { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[4] = { "debug", "info", "warning", "error" };
	int i;
	for (i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*func[i])();
			return;
		}
	}
	if(i == 4)
		std::cout << "Invalid level." << std::endl;
}

void Harl::filter(std::string level) {
	std::string levels[4] = { "debug", "info", "warning", "error" };
	int i;
	for (i = 0; i < 4; i++) {
		if (level == levels[i])
			break;
	}

	switch (i) {
		case 0:
			std::cout << "[DEBUG]\n" << std::endl;
			debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[INFO]" << std::endl;
			info();
			std::cout << std::endl;
		case 2:
			std::cout << "[WARNING]" << std::endl;
			warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ERROR]" << std::endl;
			error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "Invalid level." << std::endl;
	}
}