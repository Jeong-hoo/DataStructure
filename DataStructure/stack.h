#pragma once

#ifndef STACK.H
#define STACK.H

class Stack
{
private :
	int stack[100] = {0};
	int position;

public :
	void Push(int data);
	int Pop();
	int GetSize();
	bool IsEmpty();
	void Clear();
};
#endif // !1
