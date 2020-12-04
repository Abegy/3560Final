#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.cc"


TEST_CASE() 
{
    string test = "Hello\nhow are you";

    REQUIRE(countChar(test) == 16);
}

TEST_CASE(){
    string a = "";
    string b = "1 1";
    string c = "123458910";
    REQUIRE( countChar(a) == 0 );
    REQUIRE( countChar(b) == 3 );
    REQUIRE( countChar(c) == 11 );
}

TEST_CASE() 
{
    string test = "hello";
    REQUIRE(countChar(test) == 5);
}

