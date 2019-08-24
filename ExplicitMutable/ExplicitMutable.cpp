#include <iostream>
#include "ExplicitMutable.h"

MyString::MyString(int capacity): string_length(0), memory_capacity(capacity)
{
	string_content = new char[capacity];
	std::cout << "Capacity : " << memory_capacity;
}

MyString::MyString(const char* str)
{
	for (string_length = 0; str[string_length]; string_length++);
	string_content = new char[string_length];
	memory_capacity = string_length;
	for (int i = 0; str[i]; i++)
		string_content[i] = str[i];
}

MyString::MyString(const MyString& str): string_length(str.string_length), memory_capacity(str.memory_capacity)
{
	string_content = new char[string_length];
	for (int i = 0; str.string_content[i]; i++)
		string_content[i] = str.string_content[i];
}

MyString::~MyString()
{
	delete[] string_content;
}

int MyString::length() const
{
	return string_length;
}
