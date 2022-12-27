#pragma once

#ifndef Queue_h
#define Queue_h
#define QUEUE_MAX_COUNT 5
class CircularQueue // 원형 큐, 큐는 연결 리스트로  
{
private:
	int front, rear, len, count; // front 출력 인덱스, rear 입력 인덱스,len 전체 크기, count 입력에 사용된 인덱스 개수 
	int queue[QUEUE_MAX_COUNT] = {0};
	
public :
	CircularQueue();
	~CircularQueue();

	void Init(); // == clear
	bool Enqueue(int data); // true 성공, false 꽉 찬 상태
	int Dequeue(); // -1 리턴 시 비어있는 상태.
	int Peek(int index); //
	bool IsFull();
	bool IsEmpty();
	int GetFrontIndex();
	int GetRearIndex();
};
#endif // !Queue_h