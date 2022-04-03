#include <iostream>
#include "Dynamic_Stack.h"

enum Command
{
	PUSH = 1,
	POP = 2,
	EXIT = 3
};

void StackPrintInfo()
{
	std::cout << "<STACK>" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "[3] exit" << std::endl;
	std::cout << "---------" << std::endl;
}

void ProcessUserInput(Dynamic_Stack& stack)
{
	int command = -1;
	bool isExit = false;

	while (true)
	{
		stack.Print();

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;

		switch (command)
		{
		case PUSH:
		{
			int value;
			std::cout << " push value > ";
			std::cin >> value;
			stack.Push(value);
			break;
		}

		case POP:
			stack.Pop();
			break;

		case EXIT:
			isExit = true;
			break;

		default:
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;
		}

		if (isExit)
		{
			break;
		}
	}
}

int main()
{
	Dynamic_Stack myStack;

	StackPrintInfo();
	ProcessUserInput(myStack);
}