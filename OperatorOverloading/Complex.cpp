#include <iostream>
#include "Complex.h"

Complex Complex::operator+(const Complex& c)
{
	Complex t(real + c.real, img + c.img);
	return t;
}

Complex Complex::operator-(const Complex& c)
{
	Complex t(real - c.real, img - c.img);
	return t;
}

Complex Complex::operator*(const Complex& c)
{
	Complex t(real * c.real - img * c.img, real * c.img + img * c.real);
	return t;
}

Complex Complex::operator/(const Complex& c)
{
	Complex t(
		(real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
		(img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));

	return t;
}

Complex& Complex::operator=(const Complex& c)
{
	real = c.real;
	img = c.img;

	return *this;
}

void Complex::println(void)
{
	std::cout << "( " << real << ',' << img << " )\n";
}
