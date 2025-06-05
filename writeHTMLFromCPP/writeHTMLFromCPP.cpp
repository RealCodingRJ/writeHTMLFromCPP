#include <iostream>
#include <Windows.h>
#include <fstream>


struct option {

	std::string ELEMENT;

};

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

std::ofstream writeFiled(option Option, std::ofstream file);

std::ofstream writeFiled(option Option, std::ofstream file) noexcept {

	

	if (file.is_open()) {


		file << Option.ELEMENT;
		file.close();

	}


	return file;
}

std::ofstream BasicTemplate(std::string HTML, std::ofstream file) noexcept {

	if (file.is_open()) {

		file << HTML;
	}

	return file;

}

struct ELEMENT {

	std::string HTMLElement;

};

bool isWorking = false;

int main() {

	option Option{};
	EDITOR ed;
	ELEMENT element;

	std::ofstream file;

	std::string name;

	while (!isWorking) {


		if (file.is_open()) {

			std::cin >> ed.codeEditor;

			writeFiled(Option, std::move(file));
			openEditor(ed);

			std::cout << "What Type of Element: " << std::endl;
			std::cin >> element.HTMLElement;


			BasicTemplate(element.HTMLElement, std::move(file));

		}

		isWorking = true;

	}


	system("pause > 0");
	return 0;

}