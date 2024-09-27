#pragma once
#include <cstddef>



struct MyString
{
private:
	size_t size;
	char* str;
public:
	MyString(const char* string);
	~MyString();
};