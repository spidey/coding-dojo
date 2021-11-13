//
// Created by Thimo Van der meer on 11/11/2021.
//
#include "fizzbuzz.hpp"

#include <assert.h>
#include <sstream>

std::string FizzBuzzLine(ull n) {
	assert(n > 0);
	if (n % 15 == 0)
		return "FIZZBUZZ";
	if (n % 3 == 0)
		return "FIZZ";
	if (n % 5 == 0)
		return "BUZZ";
	return std::to_string( n );
}

std::string FizzBuzz(ull n) {
	assert(n>0);
	std::ostringstream sm;
	sm << FizzBuzzLine(1);
	for (unsigned i = 2; i <= n; ++i) {
		sm << ' ' << FizzBuzzLine(i);
	}
	return sm.str();
}


