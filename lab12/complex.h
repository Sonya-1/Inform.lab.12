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
	complex_t sum(const complex_t& c);
	complex_t diff(const complex_t& c);
	complex_t mult(const complex_t& c);
	complex_t div(const complex_t& c);
	void print_class(char title[]);
	complex_t& operator=(complex_t& rigth) = default;
};

#endif