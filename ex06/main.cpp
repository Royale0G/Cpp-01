#include "harl.hpp"

int main(int argc, char **argv){
	Harl harl;
	if(argc != 2)
		std::cout << "Usage: ./harl <level>" << std::endl;
	else
		harl.filter(argv[1]);
	return 0;
}
