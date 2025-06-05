#include <iostream>
#include <Windows.h>
#include <fstream>
#include <thread>
#include <vector>
#include <utility>
#include "FeatureLanguagesTemplates.hpp"
#include "FeatureTemplateLanguagesFunctions.cpp"

std::atomic<bool> flag{ false };

std::ofstream file("index.html");
std::ofstream fileJS("index.js");

struct EDITOR {
	
	std::string codeEditor;
};

static void joinedThreadsFile() {

	std::thread t;
		
	while (flag == false) {

		t.join();
		
		flag = true;
	}

}

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

struct LanguagesNames {

	Languages lang;
};

int printOption(Languages lang) noexcept {
	

	int index;
	Languages Lang = Languages::HTML;
	
	std::cin >> index;

	if (index == 1) {


		int htmlIndex = std::to_underlying(lang);
		std::cout << "HTML Index: " << htmlIndex << std::endl;

	}

	if (index == 2) {

		Languages langCSS = Languages::CSS;
		int cssIndex = std::to_underlying(langCSS);
		std::cout << "CSS Index: " << cssIndex << std::endl;
	}

	if (index == 3) {

		Languages langJS = Languages::JS;
		int jsIndex = std::to_underlying(langJS);
		std::cout << "JS Index: " << jsIndex << std::endl;
	}

	return index;
}

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
		joinedThreadsFile();

	}

	file.close();
}

struct TypedProject {
	
	std::string typeProject;
};

struct ELEMENT {

	std::string HTMLElement;

};


bool isWorking = false;

int main() {

	option Option;
	EDITOR ed;
	ELEMENT element;

	TypedProject project;

	vec vector1;

	while (!isWorking) {

		std::cout << "Enter Editor: " << std::endl;
		std::string IDE;

		std::cin >> ed.codeEditor;

		

		if (ed.codeEditor == "Code") {
			openEditor(ed);
		

			std::string template1;
			std::ofstream file("index.html");

			std::cout << "Template Y | N: " << std::endl;
			std::cin >> template1;



			if (template1 == "Yes") {

				std::cout << "Template Type: (HTML, CSS, JS): " << std::endl;
				std::cin >> project.typeProject;

				int index = 0;

				if (project.typeProject == "HTML") {

					std::cout << "HTML/CSS/JS: " << std::endl;
					std::cin >> index;

					if (index == 1) {


						std::string starterHTML = "<!DOCTYPE html>\n <html><head></head></html>";

						std::cout << "HTML/CSS/JS: " << std::endl;

						std::cin >> index;

						Languages lang = (Languages)index;


						joinedThreadsFile();
						writeFile1(starterHTML, std::move(file));

						printOption(lang);


						std::cout << "What Type of Element: " << std::endl;
						std::cin >> Option.ELEMENT;

						joinedThreadsFile();
						writeFiled(Option, std::move(file));

					}
					else {


						std::cout << "Enter Code to Append to File: " << std::endl;
						std::string code;

						std::cin >> code;

						if (file.is_open()) {



							createFileFunctionEnable(code, std::move(fileJS));
						
						}

					}

				}
			
			
			}

			else {

				//openEditor(ed);

			}

		}
		else {
	

			std::string template1;


			std::cout << "Template Y | N: " << std::endl;
			std::cin >> template1;


			std::cout << "Template Y | N: " << std::endl;
			std::cin >> project.typeProject;

			if (project.typeProject == "JS") {

				createFileFunctionEnable(project.typeProject, std::move(fileJS))
			}

			if (template1 == "Yes") {

				std::string starterHTML = "<!DOCTYPE html>\n <html><head></head></html>";

				joinedThreadsFile();
				writeFile1(starterHTML, std::move(file));
			}
			else {

				//openEditor(ed);

				std::cout << "What Type of Element: " << std::endl;
				std::cin >> Option.ELEMENT;

				joinedThreadsFile();
				writeFiled(Option, std::move(file));

			}


		}


		isWorking = true;
	}

	system("pause > 0");
	return 0;

}