#pragma once
#include <iostream>

using namespace std;
#ifndef STACK_H
#define STACK_H

class Stack
{
	private :
		int stack[10] = {0};
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
		void Print();
};
#endif // !
