#include <iostream>
#include "complex.h"

complex_t operator+(const complex_t& c1, const complex_t& c2) {
	return complex_t(c1.re + c2.re, c1.im + c2.im);
}

complex_t operator-(const complex_t& c1, const complex_t& c2) {
	return complex_t(c1.re - c2.re, c1.im - c2.im);
}

complex_t operator*(const complex_t& c1, const complex_t& c2) {
	double re = c1.re * c2.re - c1.im * c2.im;
	double im = c1.re * c2.im + c2.re * c1.im;
	return complex_t(re, im);
}

complex_t operator/(const complex_t& c1, const complex_t& c2) {
	double den = c2.re * c2.re + c2.im * c2.im;
	double re = (double)((c1.re * c2.re + c1.im * c2.im) / den);
	double im = (double)((c1.im * c2.re - c1.re * c2.im) / den);
	return complex_t(re, im);
}

complex_t::complex_t(double re, double im) {
	this->re = re;
	this->im = im;
}
complex_t::complex_t(double re) {
	this->re = re;
	im = 0;
}

complex_t::complex_t() {
	this->re = 0;
	this->im = 0;
}

void complex_t::set_re(double re) {
	this->re = re;
}

void complex_t::set_im(double im) {
	this->im = im;
}

double complex_t::get_re() {
	return this->re;
}

double complex_t::get_im() {
	return this->im;
}

std::ostream& operator<< (std::ostream& out, const complex_t& c) {
	char sign = NULL;
	double im = 0;

	if (c.im >= 0) {
		sign = '+';
		im = c.im;
	}
	if (c.im < 0) {
		sign = '-';
		im = -c.im;
	}
	out << c.re << ' ' << sign << " i*" << im << '\n';

	return out;
}

std::istream& operator>>(std::istream& in, complex_t& c) {
	double c_re = 0, c_im = 0;

	std::cout << "c1\nInput real part: ";
	in >> c.re;
	if (std::cin.fail()) {
		std::cout << "Invalid value";
		std::exit(1);
	}

	std::cout << "Input imaginary part: ";
	in >> c.im;
	if (std::cin.fail()) {
		std::cout << "Invalid value";
		std::exit(1);
	}

	return in;
}