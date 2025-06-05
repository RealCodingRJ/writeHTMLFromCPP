#include <iostream>
#include <Windows.h>
#include <fstream>
#include <vector>


struct EDITOR {
	
	std::string codeEditor;
};

static void openEditor(EDITOR editor) noexcept {

	std::cout << "Enter Type of Editor: ";

	std::cin >> editor.codeEditor;

	if (editor.codeEditor == "code") {

		ShellExecuteA(nullptr, "open", "code .", nullptr, nullptr, SW_SHOWDEFAULT);
	}
	


}

struct vec {
	std::string vec1;
};

struct option {

	std::string ELEMENT;

};



void writeFiled(option Option, std::ofstream file) {

	

	if (file.is_open()) {


		file << Option.ELEMENT;
		//file.close();

	}

	file.close();
}


static void writeFile1(std::string html, std::ofstream file) {



	if (file.is_open()) {


		file << html;
		//file.close();

	}

	file.close();
}



struct ELEMENT {

	std::string HTMLElement;

};


bool isWorking = false;

int main() {

	option Option;
	EDITOR ed;
	ELEMENT element;

	vec vector1;

	while (!isWorking) {

		std::cout << "Enter Editor: " << std::endl;
		std::string IDE;

		std::cin >> ed.codeEditor;

		if (IDE == "Code") {
			openEditor(ed);
		

			std::string template1;
			std::ofstream file("index.html");

			std::cout << "Template Y | N: " << std::endl;
			std::cin >> template1;

			if (template1 == "Yes") {

				std::string starterHTML = "<!DOCTYPE html>\n <html><head></head></html>";

				writeFile1(starterHTML, std::move(file));
			}
			else {

				//openEditor(ed);

				std::cout << "What Type of Element: " << std::endl;
				std::cin >> Option.ELEMENT;

				writeFiled(Option, std::move(file));

			}

		}
		else {
	

			std::string template1;
			std::ofstream file("index.html");

			std::cout << "Template Y | N: " << std::endl;
			std::cin >> template1;

			if (template1 == "Yes") {

				std::string starterHTML = "<!DOCTYPE html>\n <html><head></head></html>";

				writeFile1(starterHTML, std::move(file));
			}
			else {

				//openEditor(ed);

				std::cout << "What Type of Element: " << std::endl;
				std::cin >> Option.ELEMENT;

				writeFiled(Option, std::move(file));

			}


		}


		isWorking = true;
	}

	system("pause > 0");
	return 0;

}