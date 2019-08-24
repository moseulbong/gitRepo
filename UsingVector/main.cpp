#include <iostream>
#include <vector>

constexpr auto MAXSIZE = 100;
using namespace std;

int main(void)
{
	vector<int> vec;
	vec.push_back(3);
	cout << vec[0] << '\n';
	vec.pop_back();
	cout << "Size of vec : " << vec.size() << '\n';

	vector<int> vec_a(10, -1);
	cout << "vec_a size : " << vec_a.size() << '\n';
	cout << "random content vec_a[8] : " << vec_a[8] << '\n';

	vec_a.resize(30, 2);
	cout << "vec_a new size : " << vec_a.size() << '\n';
	cout << "front value of vec_a : " << vec_a.front() << '\n';
	cout << "back value of vec_a : " << vec_a.back() << '\n';
	vec_a.clear();
	cout << "after clear size of vec_a" << vec_a.size() << '\n';
	// cout << "after clear random content vec_a[25] : " << vec_a[25] << '\n';
	if (vec_a.empty())
		cout << "vec_a is empty";

	return 0;
}