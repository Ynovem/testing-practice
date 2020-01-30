#include <catch.hpp>
#include <converter.h>

TEST_CASE( "centuryFromYear", "first" ) {
	REQUIRE( Converter::centuryFromYear(1) == 1 );
}
