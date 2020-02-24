#include <iostream>
#include <QDate>

#include <sentence/sentence.h>
#include "converter.h"

void printSentence(const Sentence& sentence)
{
	std::cout << sentence.getSentence().toStdString() << std::endl;
	std::cout << "Reverse: " << sentence.reverse().toStdString() << std::endl;
	std::cout << "Is" << (sentence.isPalindrome() ? " " : " not ") << "palindrome" << std::endl;
}

int main() {
	std::cout << "Hello Academy!" << std::endl;
	int year = QDate::currentDate().year();
	std::cout << "This is the " << Converter::centuryFromYear(year) << "st century" << std::endl;

	Sentence sentence;
	sentence.setSentence("This is a sentence.");

	printSentence(sentence);
	std::string path;
	std::cout << "Filepath for load a sentence:";
	std::cin >> path;

	if(!sentence.loadSentence(QString::fromStdString(path))) {
		std::cout << "Error: could not file (" << path << ")" << std::endl;
		return 1;
	}

	printSentence(sentence);
}
