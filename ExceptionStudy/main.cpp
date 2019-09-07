#include <stdexcept>
#include <iostream>

using namespace std;

void CopyObject(const char* original)
{
	if (original == nullptr)
		throw runtime_error("인수가 NULL이다 !");
	cout << original << '\n';
}
int main(void)
{
	try
	{
		char* name = nullptr;
		CopyObject(name);
	}
	catch (exception& e)
	{
		cerr << e.what() << '\n';
	}
	catch (int e)
	{
		cerr << e << '\n';
	}
	catch (...)
	{
		cerr << "모든 exception 처리" << '\n';
	}

	return 0;
}