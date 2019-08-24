#include <iostream>

using namespace std;

int main(void)
{
	int x;
	int* p_int;

	p_int = &x;
	cout << "Enter a number : ";
	cin >> x;
	cout << "number is " << *p_int << '\n';
	cout << "Address x is : " << &x;

	return 0;
}
