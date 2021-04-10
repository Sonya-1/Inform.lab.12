#include <iostream>
#include "complex.h"

int main() {
	complex_t c1;
	complex_t c2;

	std::cin >> c1;
	std::cout << "c1: " << c1;
	std::cin >> c2;
	std::cout << "c2: " << c2;
	
	complex_t c_sum = c1 + c2;
	complex_t c_diff = c1 - c2;
	complex_t c_mult = c1 * c2;
	complex_t c_div = c1 / c2;

	std::cout << "c1 + c2: " << c_sum;
	std::cout << "c1 - c2: " << c_diff;
	std::cout << "c1 * c2: " << c_mult;
	std::cout << "c1 / c2: " << c_div;
	
	return 0;
}
