#include "Dynamic_Stack.h"
#include <iostream>

Dynamic_Stack::Dynamic_Stack() : mCount{}, mTop{ nullptr }
{

}

Dynamic_Stack::~Dynamic_Stack()
{

}

void Dynamic_Stack::Push(int value)
{
	Element* element = new Element();
	element->value = value;

	element->next = mTop;
	mTop = element;
	mCount++;
}

bool Dynamic_Stack::Pop()
{
	if (mCount == 0)
	{
		std::cout << "STACK is EMPTY!" << std::endl;
		return false;
	}

	Element* prevTop = mTop;
	int value = prevTop->value;

	mTop = prevTop->next;
	mCount--;

	delete prevTop;

	std::cout << "POP : " << value << std::endl;
	return true;
}

void Dynamic_Stack::Print() const
{
	Element* element = mTop;

	while (element != nullptr)
	{
		std::cout << element->value << std::endl;
		element = element->next;
	}
}
