#include "stack.h"

void Stack::Clear()
{
	position = -1;
}

Stack::Stack()
{
	position = -1;
	len = sizeof(stack) / sizeof(stack[0]);
}

Stack::~Stack()
{
	//delete[] stack;
}
int Stack::Pop()
{
	if (IsEmpty())
		return -1;

	stack[position--] = 0;
	return stack[position];
}

bool Stack::Push(int data) // result ��ȯ
{
	if (IsFull())
		return false;

	stack[++position] = data;
	return true;
}

int Stack::GetSize()
{
	return position + 1;
}

bool Stack::IsEmpty()
{
	return position == -1;
}

bool Stack::IsFull()
{
	return (position+1) == len;
}
void Stack::Print()
{
	for (int i = 0; i < len; i++)
	{
		cout << stack[i] << " ";
	}
	cout << endl << endl;
}
