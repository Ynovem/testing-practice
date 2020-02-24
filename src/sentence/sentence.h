#pragma once

#include <QStringList>
#include <QList>
#include <QString>

class Sentence {
	public:
		Sentence() = default;

		QString getSentence() const;

		void setSentence(QString sentence);
		bool loadSentence(const QString & path);

		QString reverse() const;
		bool isPalindrome() const;

	private:
		static QString reverse(const QString& sentence);

	private:
		QString sentence;

	private:
		static QString pattern;
};
