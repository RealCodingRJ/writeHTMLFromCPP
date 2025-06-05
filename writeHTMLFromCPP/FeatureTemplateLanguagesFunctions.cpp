#include <iostream>
#include <fstream>

void createFileFunctionEnable(std::string code, std::ofstream file);

void createFileFunctionEnable(std::string code, std::ofstream file) {

	if (file.is_open()) {

		file << code;
	}

	file.close();
}