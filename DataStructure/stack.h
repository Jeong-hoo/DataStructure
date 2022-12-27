#include <iostream>

#ifndef STACK_H
#define STACK_H

#define STACK_MAX_COUNT 10
class Stack
{
	private :
		int stack[STACK_MAX_COUNT] = {0};
		int position;
		int len;

	public :
		Stack();
		~Stack();
		bool Push(int data);
		int Pop();
		int GetSize();
		bool IsEmpty();
		bool IsFull();
		void Clear();
		int Peek(int index);
};
#endif // !
