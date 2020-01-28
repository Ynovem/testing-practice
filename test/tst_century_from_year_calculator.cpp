#include <catch.hpp>

int centuryFromYear(int year) {
	int result = (year - 1) / 100;
	return result + 1;
}

TEST_CASE( "centuryFromYear", "first" ) {
	REQUIRE( centuryFromYear(1) == 1 );
	REQUIRE( centuryFromYear(100) == 1 );
	REQUIRE( centuryFromYear(101) == 2 );
	REQUIRE( centuryFromYear(2000) == 20 );
	REQUIRE( centuryFromYear(2020) == 21 );
}
