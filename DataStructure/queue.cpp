
#include "queue.h"

CircularQueue::CircularQueue()
{
	front = 0, rear = -1, count = 0;
	len = sizeof(queue) / sizeof(queue[0]);
}
CircularQueue::~CircularQueue() {}

void CircularQueue::Init()
{
	front = 0, rear = -1, count = 0;
}
bool CircularQueue::Enqueue(int data)
{
	if (!IsFull())
	{
		rear = (rear + 1) % len;
		queue[rear] = data;
		count++;
		return true;
	}
	return false;
}
int CircularQueue::Dequeue()
{

	if (!IsEmpty())
	{
		count--;

		return queue[++front % len];
	}
	return -1;
}
int CircularQueue::Peek(int index) // 현재 제일 앞에 있는 값을 리턴한다.
{
	return queue[index];
}

bool CircularQueue::IsFull()
{
	return count == len;
}
bool CircularQueue::IsEmpty()
{
	return count == 0;
}
int CircularQueue::GetFrontIndex()
{
	front %= len;
	return front;
}
int CircularQueue::GetRearIndex()
{
	return rear;
}
