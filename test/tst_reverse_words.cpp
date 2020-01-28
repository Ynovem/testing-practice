#include "catch.hpp"

#include <QtCore/QString>
#include <QtCore/QStringList>

using Catch::Matchers::Equals;

std::string reverseWords(const std::string &sentence)
{
	QStringList splitSentence = QString::fromStdString(sentence).split(" ", QString::SplitBehavior::SkipEmptyParts);
	QStringList reversedWords;
	QList<QString>::reverse_iterator i;
	for (i = splitSentence.rbegin(); i != splitSentence.rend(); ++i) {
		reversedWords << *i;
	}
	return reversedWords.join(" ").toStdString();
}

TEST_CASE("Reverse single char")
{
	REQUIRE_THAT(reverseWords("a"), Equals("a"));
	REQUIRE_THAT(reverseWords("b"), Equals("b"));
}

TEST_CASE("Reverse single word")
{
	REQUIRE_THAT(reverseWords("ab"), Equals("ab"));
}

TEST_CASE("Reverse mutliple word")
{
	REQUIRE_THAT(reverseWords("geza kek az eg"), Equals("eg az kek geza"));
}

