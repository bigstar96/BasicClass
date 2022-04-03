#pragma once
#include <iostream>

class String
{
	// 문자열 복사
	
	char* mpString{};
	int mLength;

public:
	String(const char* string);
	~String();

	void Print();
	
};

