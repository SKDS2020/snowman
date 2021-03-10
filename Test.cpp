
#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11111111)) == nospaces(" _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(nospaces(snowman(22222222)) == nospaces("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(nospaces(snowman(33333333)) == nospaces("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(nospaces(snowman(44444444)) == nospaces("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(32443333)) == nospaces("   _   \n  /_\\  \n (-.-) \n/(> <)\\\n (___)"));
    CHECK(nospaces(snowman(44114432)) == nospaces("  ___  \n (_*_) \n (. .) \n (><) \n (\" \") "));
    CHECK(nospaces(snowman(31114412)) == nospaces("   _   \n  /_\\  \n (.,.) \n ( : ) \n (\" \") "));
    CHECK(nospaces(snowman(41114412)) == nospaces("  ___  \n (_*_) \n (.,.) \n ( : ) \n (\" \")"));
    CHECK(nospaces(snowman(11114412)) == nospaces(" _===_ \n (.,.) \n ( : ) \n (\" \") "));	
    CHECK(nospaces(snowman(12114414)) == nospaces(" _===_ \n (...) \n ( : ) \n (   ) "));
    CHECK(nospaces(snowman(13114414)) == nospaces(" _===_ \n (._.) \n  ( : ) \n (   ) "));
    CHECK(nospaces(snowman(14114414)) == nospaces(" _===_ \n (. .) \n  ( : ) \n (   ) "));
    CHECK(nospaces(snowman(11114414)) == nospaces(" _===_ \n (.,.) \n ( : ) \n (   ) "));	
    CHECK(nospaces(snowman(11111111)) == nospaces(" _===_ \n (.,.) \n<( : )>\n ( : ) "));





    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {

    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(-1234));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(12+322));
    CHECK_THROWS(snowman(31114416));
    CHECK_THROWS(snowman(311144132));
    CHECK_THROWS(snowman(44445444));
    CHECK_THROWS(snowman(44114932));
    CHECK_THROWS(snowman(44014232));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(111144*2));
    CHECK_THROWS(snowman(11111-11));


    /* Add more checks here */
}


/* Add more test cases here */
