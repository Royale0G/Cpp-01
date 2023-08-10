#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "Mem addr of str    :" << &strPtr << std::endl;
	std::cout << "Mem addr of strPtr :" << &strRef << std::endl;
	std::cout << "Mem addr of  strRef:" << &strPtr << std::endl;

	std::cout << "str    :" << str << std::endl;
	std::cout << "strPtr :" << *strPtr << std::endl;
	std::cout << "strRef :" << strRef << std::endl;

	return 0;
}