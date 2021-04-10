#include <iostream>
#include "complex.h"

complex_t::complex_t(double re, double im) {
	this->re = re;
	this->im = im;
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

complex_t complex_t::sum(const complex_t& c) {
	complex_t ret;
	ret.re = re + c.re;
	ret.im = im + c.im;
	return ret;
}

complex_t complex_t::diff(const complex_t& c) {
	complex_t ret;
	ret.re = re - c.re;
	ret.im = im - c.im;
	return ret;
}

complex_t complex_t::mult(const complex_t& c) {
	complex_t ret;
	ret.re = re * c.re - im * c.im;
	ret.im = re * c.im + c.re * im;
	return ret;
}

complex_t complex_t::div(const complex_t& c) {
	complex_t ret;
	double den = c.re * c.re + c.im * c.im;
	ret.re = (double)((re * c.re + im * c.im) / den);
	ret.im = (double)((im * c.re - re * c.im) / den);
	return ret;
}

void complex_t::print_class(char title[]) {
	char sign = NULL;
	double abs_value = 0;

	std::cout << title << ": ";

	if (this->im >= 0) {
		sign = '+';
		abs_value = this->im;
	}
	if (this->im < 0) {
		sign = '-';
		abs_value = -this->im;
	}
	std::cout << this->re << ' ' << sign << ' ' << "i*" << abs_value << '\n';
}
