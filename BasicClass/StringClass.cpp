#include "StringClass.h"

String::String(const char* string) : mpString{}, mLength{}
{
	// pInput ���ڿ��� ���� ��ŭ �����Ҵ�
	mLength = 0;
	while (string[mLength] != '\0') mLength++;
	// ��� ���ڿ��� ���� �ڿ��� \0

	mpString = new char[mLength + 1];

	// pInput ���� ����� ����
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
