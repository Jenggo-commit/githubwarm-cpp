#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

const int widthB = 20;
const int heightB = 20;

	


void level() {

	int level = 0;
}

int main() {
	srand(time(0));

	std::vector<std::string> words = { "apple", "banana", "cherry", "date", "berry" };
	int lives = 6;

	int randomIndex = rand() % words.size();
	
	std::string secretWord = words[randomIndex];
	std::string guessedWord(secretWord.length(), '_');

	std::cout << "Welcome to Hangman!" << std::endl;
	std::cout << "You have " << lives << " lives." << std::endl;

	for (int i = 0; i < widthB; i++) {
		if (i == 0 || i == widthB - 1) {
			std::cout << "#";
		}
		else {
			std::cout << "-";
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < heightB - 2; i++) {
		std::cout << "#";
		for (int j = 0; j < widthB - 2; j++) {
			std::cout << " ";
		}
		std::cout << "#" << std::endl;
	}

	for (int i = 0; i < widthB; i++) {
		if (i == 0 || i == widthB - 1) {
			std::cout << "#";
		}
		else {
			std::cout << "-";
		}
	}
	std::cout << std::endl;

	return 0;
}