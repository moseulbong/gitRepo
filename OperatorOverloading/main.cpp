#include "Complex.h"

int main(void)
{
	Complex a(1.0, 2.0);
	Complex b(3.0, -2.0);
	Complex c = a * b;

	a += b;
	c.println();
	a.println();
}