#include <iostream>
#include <string>
#include <fstream>

void replace(std::string path, std::string s1, std::string s2){
	std::ifstream ifs;
	std::ofstream ofs(path + ".replace");
	std::string line;
	std::string replace;
	int new_line = 0;
	size_t	len;

	if(s1 == "" || s2 == ""){
		std::cout << "Strings can't be empty" << std::endl;
		return;
	}
	ifs.open(path);
	if(ifs.is_open()){
		while (ifs.good()){
			std::getline(ifs, replace);
			line.append(replace);
			if (new_line == 0)
				new_line = 1;
			else
				line.append("\n");
		}
	}
	else{
		std::cout << "Can't open the file" << std::endl;
		return;
	}
	while(line[line.find(s1)] != '\0' && len >= 0){
		len = line.find(s1);
		if (len >= 0){
			line.erase(len, s1.length());
			line.insert(len, s2);
		}
	}
	ofs << line;
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