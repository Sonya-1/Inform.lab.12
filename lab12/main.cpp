#include <iostream>
#include "complex.h"

int main() {
	char input_c1[] = "c1";
	char input_c2[] = "c2";
	char title_sum[] = "c1 + c2";
	char title_dif[] = "c1 - c2";
	char title_mult[] = "c1 * c2";
	char title_div[] = "c1 / c2";

	double c1_re = 0, c1_im = 0, c2_re = 0, c2_im = 0;

	std::cout << "c1\nInput real part: ";
	std::cin >> c1_re;
	if (std::cin.fail()) {
		std::cout << "Invalid value";
		std::exit(1);
	}

	std::cout << "Input imaginary part: ";
	std::cin >> c1_im;
	if (std::cin.fail()) {
		std::cout << "Invalid value";
		std::exit(1);
	}

	complex_t c1(c1_re, c1_im);
	c1.print_class(input_c1);

	std::cout << "c2\nInput real part: ";
	std::cin >> c2_re;
	if (std::cin.fail()) {
		std::cout << "Invalid value";
		std::exit(1);
	}

	std::cout << "Input imaginary part: ";
	std::cin >> c2_im;
	if (std::cin.fail()) {
		std::cout << "Invalid value";
		std::exit(1);
	}

	complex_t c2(c2_re, c2_im);
	c2.print_class(input_c2);

	complex_t c_sum = c1.sum(c2);
	complex_t c_diff = c1.diff(c2);
	complex_t c_mult = c1.mult(c2);
	complex_t c_div = c1.div(c2);

	c_sum.print_class(title_sum);
	c_diff.print_class(title_dif);
	c_mult.print_class(title_mult);
	c_div.print_class(title_div);

	return 0;
}