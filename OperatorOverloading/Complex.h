#pragma once
class Complex
{
private:
	double real, img;

public:
	Complex(double r, double i) : real(r), img(i) {};
	Complex(const Complex& c) { real = c.real, img = c.img; };
	Complex operator+(const Complex&);
	Complex operator-(const Complex&);
	Complex operator*(const Complex&);
	Complex operator/(const Complex&);
	Complex& operator=(const Complex&);

	void println(void);
};
