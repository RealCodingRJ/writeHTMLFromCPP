#include <iostream>
#include <fstream>


enum class Languages : int {

	HTML = 1,
	CSS = 2,
	JS = 3
};

void createFileFunctionEnable(std::string code, std::ofstream file);

void createFileFunctionEnable(std::string code, std::ofstream file) {

	if (file.is_open()) {

		file << code;
	}



	file.close();
}