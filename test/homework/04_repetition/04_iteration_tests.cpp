/*
Write the test case for the factorial function:
num: 3, expected value: 6
num: 5, expected value: 120
num: 6, expected value: 720

Write the test case for the gcd function
num1: 5, num2: 15, expected value: 5
num1: 21, num2: 28, expected value: 7
num1: 25, num2: 100, expected value: 25

*/
	
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Factorial Function") {
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(6) == 720);
}

TEST_CASE("GCD Function") {
    REQUIRE(gcd(5, 15) == 5);
    REQUIRE(gcd(21, 28) == 7);
    REQUIRE(gcd(25, 100) == 25);
}

