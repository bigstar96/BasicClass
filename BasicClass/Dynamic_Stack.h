#pragma once
class Dynamic_Stack
{
	struct Element
	{
		int value;
		Element* next;
	};

	int mCount;
	Element* mTop;

public:
	Dynamic_Stack();
	~Dynamic_Stack();
	
	void Push(int value);
	bool Pop();
	void Print() const;
};

