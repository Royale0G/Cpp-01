#include <iostream>
#include <string>
#include <fstream>

void replace(std::string path, std::string s1, std::string s2){
	std::ifstream ifs;
	std::ofstream ofs;
	std::string line;
	std::string::size_type pos;

	ifs.open(path);
	ofs.open(path + ".replace");
	if(!ifs.is_open() || !ofs.is_open()){
		std::cout << "Error: Unable to open file." << std::endl;
		return;
	}
	while(getline(ifs, line)){
		while((pos = line.find(s1)) != std::string::npos)
			line.replace(pos, s1.length(), s2);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}


int main(int argc, char **argv){
	if(argc == 1){
		std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
		return 1;
	}
	else
		replace(argv[1], argv[2], argv[3]);
	return 0;
}