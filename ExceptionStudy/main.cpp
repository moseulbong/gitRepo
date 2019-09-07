#include <stdexcept>
#include <iostream>

using namespace std;

void CopyObject(const char* original)
{
	if (original == nullptr)
		throw runtime_error("�μ��� NULL�̴� !");
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
		cerr << "��� exception ó��" << '\n';
	}

	return 0;
}