#include <iostream>
#include <string>

struct MyString
{
private:
	size_t size = 0;
	char* str;

public:
	MyString(const char* string)
	{
		while (string[size] != '\0')
		{
			size++;
		}

		str = new char[size + 1];

		for (int i = 0; i < size; ++i)
		{
			str[i] = string[i];
		}
		str[size] = '\0';
	}

	~MyString()
	{
		delete[] str;
	}

};