#pragma once
#include <iostream>

class RationalNumber {
private:
	int numerator;
	int denominator;

public:
	RationalNumber() {
		numerator = 0;
		denominator = 1;
	}
	RationalNumber(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}

	// Место под ваши перегрузки


};