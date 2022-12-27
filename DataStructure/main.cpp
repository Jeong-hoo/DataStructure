#include "stack.h"
#include "queue.h"

using namespace std;

int main()
{
#pragma region stack
	//Stack stack;

	//int input;

	//stack.Clear();
	//while (1)
	//{
	//	cout << " 입력하세요  (0은 종료, -1은 pop) : ";
	//	cin >> input;

	//	cout << boolalpha;  // std::boolalpha는 1,0으로 나오는 bool값을 true, false string으로 변환.
	//	if (input == 0)
	//		return 0;

	//	if (input == -1)
	//	{
	//		stack.Pop();
	//		cout << "Size After Pop : " << stack.GetSize() << endl;
	//	}
	//	else
	//	{
	//		// 연산자 오버로딩 안해주면 C#처럼 +로는 값 안나온다 아예
	//		cout << "IsEmpty ??  : " << stack.IsEmpty() << endl;
	//		cout << "Push result :" << stack.Push(input) << endl;
	//		cout << "Size After Push : " << stack.GetSize() << endl;
	//	}
	//
	//	cout << "Is Stack Full ? : " << stack.IsFull() << endl;
	//	cout << endl;
	//	
	//	for (int i = 0; i < stack.GetSize(); i++)
	//	{
	//		cout << stack.Peek(i) << " "; // peek => index가 배열 사이즈에 속하면 stack[i]값 return, 아니면 -1 return
	//	}
	//	cout << endl << endl;
	//}
	// INT32.MAX 보다 크거나 INT32.MIN보다 작은 값을 입력하면 WHILE문이 반복.. 무슨 오류일까
#pragma endregion stack
	
#pragma region queue
	
	cout << boolalpha;

	CircularQueue circularQueue; // SIZE가 5인 배열 생성

	int input;

	while (1)
	{
		cout << "수를 입력하세요 (0은 Dequeue, -1은 종료) : ";
		cin >> input;

		if (input == -1)
			return 0;
		
		else if (input == 0)
		{
			bool dequeueResult = circularQueue.Dequeue() != -1;

			cout << "\t\t Dequeue 결과는 " << dequeueResult << " 입니다. " << endl;
		}
		else
		{
			bool enqueueResult = circularQueue.Enqueue(input);
			
			cout << "Enqueue 결과는 " << enqueueResult << " 입니다. " << endl;
		}
		
		int front = circularQueue.GetFrontIndex();
		int rear = circularQueue.GetRearIndex();
		// 큐 출력용
		cout << "\t\t\t\t\t  Front : " << front << "에서 다음에 지워야함 \t Rear : " << rear << "에 넣음" << endl;

		if (!circularQueue.IsEmpty())
		{
			if (rear < front)
			{
				for (int i = front; i < QUEUE_MAX_COUNT; i++)
				{
					cout << circularQueue.Peek(i) << " ";
				}
				for (int i = 0; i <= rear; i++)
				{
					cout << circularQueue.Peek(i) << " ";
				}

			}
			else //if (rear > front)
			{
				for (int i = front; i <= rear; i++)
				{
					cout << circularQueue.Peek(i) << " ";
				}
			}
		}
		else
			cout << "큐가 비어있음. ";

			cout << endl << endl;
		
	}

#pragma endregion queue
}
