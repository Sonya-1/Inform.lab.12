#include <iostream>

#ifndef A_H
#define A_H

class complex_t {
private:
	double re;
	double im;
public:
	complex_t();
	complex_t(double re, double im);
	void set_re(double re);
	double get_re();
	void set_im(double im);
	double get_im();
	complex_t& operator=(complex_t& rigth) = default;
	friend complex_t operator+(const complex_t& c1, const complex_t& c2);
	friend complex_t operator-(const complex_t& c1, const complex_t& c2);
	friend complex_t operator*(const complex_t& c1, const complex_t& c2);
	friend complex_t operator/(const complex_t& c1, const complex_t& c2);
	friend std::ostream& operator<<(std::ostream& out, const complex_t& c);
	friend std::istream& operator>>(std::istream& in, complex_t& c);
};

#endif
