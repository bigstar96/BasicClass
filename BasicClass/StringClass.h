#pragma once
#include <iostream>

class String
{
	// ���ڿ� ����
	
	char* mpString{};
	int mLength;

public:
	String(const char* string);
	~String();

	void Print();
	
};

