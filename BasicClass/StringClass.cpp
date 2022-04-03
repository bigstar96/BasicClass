#include "StringClass.h"

String::String(const char* string) : mpString{}, mLength{}
{
	// pInput 문자열의 길이 만큼 동적할당
	mLength = 0;
	while (string[mLength] != '\0') mLength++;
	// 모든 문자열의 가장 뒤에는 \0

	mpString = new char[mLength + 1];

	// pInput 에서 멤버로 복사
	for (int i = 0; i < mLength; ++i)
	{
		mpString[i] = string[i];
	}
	mpString[mLength] = '\0';
}

String::~String()
{
	delete mpString;
}

void String::Print()
{
	std::cout << mpString << std::endl;
}
