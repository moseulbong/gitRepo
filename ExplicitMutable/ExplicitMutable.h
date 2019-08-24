#ifndef EXPLICITMUTABLE_H
#define EXPLICITMUTABLE_H

class MyString
{
public:
	explicit MyString(int capacity);
	MyString(const char* str);
	MyString(const MyString& str);
	~MyString();

	int length() const;

private:
	char* string_content;
	int string_length;
	int memory_capacity;
};

#endif // !ExplicitMutable_H

