#pragma once

#ifndef Queue_h
#define Queue_h
#define QUEUE_MAX_COUNT 5
class CircularQueue // ���� ť, ť�� ���� ����Ʈ��  
{
private:
	int front, rear, len, count; // front ��� �ε���, rear �Է� �ε���,len ��ü ũ��, count �Է¿� ���� �ε��� ���� 
	int queue[QUEUE_MAX_COUNT] = {0};
	
public :
	CircularQueue();
	~CircularQueue();

	void Init(); // == clear
	bool Enqueue(int data); // true ����, false �� �� ����
	int Dequeue(); // -1 ���� �� ����ִ� ����.
	int Peek(int index); //
	bool IsFull();
	bool IsEmpty();
	int GetFrontIndex();
	int GetRearIndex();
};
#endif // !Queue_h