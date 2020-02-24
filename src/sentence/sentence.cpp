#include "sentence.h"

#include <iostream>

#include <QFileInfo>
#include <QTextStream>
#include <QRegExp>

QString Sentence::pattern("[^a-bA-Z0-9]");

QString Sentence::getSentence() const
{
	return sentence;
}

void Sentence::setSentence(QString sentence)
{
	this->sentence = std::move(sentence);
}

bool Sentence::loadSentence(const QString & path)
{
	if (!QFileInfo::exists(path)) {
		std::cout << "Error: file is not exists" << std::endl;
		return false;
	}

	QFile file(path);
	if (!file.open(QIODevice::ReadOnly)) {
		std::cout << "Error: file cannot open" << std::endl;
		return false;
	}

	sentence = file.readAll();
	file.close();
	return true;
}

bool Sentence::isPalindrome() const
{
	QString onlyWordCharacters = sentence;
	onlyWordCharacters.remove(QRegExp(pattern)).toLower();
	return onlyWordCharacters == reverse(onlyWordCharacters);
}

QString Sentence::reverse() const
{
	return reverse(sentence);
}

QString Sentence::reverse(const QString& sentence)
{
	QString reversedWords;
	std::reverse_copy(sentence.begin(), sentence.end(), std::back_inserter(reversedWords));
	return reversedWords;
}
