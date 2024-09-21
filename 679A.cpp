#include <cmath>
#include <iostream>
#include <string>
#include <array>

bool isMultipleOf (int num) {
	std::string result {};
	std::cout << num << std::endl;
	std::cin >> result;
	if (result == "yes") return true;
	return false;
}

int main () {
	constexpr std::array<int, 15> primes { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	constexpr std::array<int, 4> smallPrimes { 2, 3, 5, 7 };
	int num = 1;
	int numberOfDivisors = 0;
	int q = 20;
	int i = 0;
	int idk;

	for (int num : primes) {
		if (isMultipleOf(num)) ++numberOfDivisors;
	}

	if (numberOfDivisors == 2) {
		std::cout << "composite" << std::endl;
		return 0;
	}

	for (int num : smallPrimes) {
		if (isMultipleOf(num * num)) ++numberOfDivisors;
	}

	if (numberOfDivisors >= 2) std::cout << "composite" << std::endl;
	else                       std::cout << "prime"     << std::endl;
	
	return 0;
}
