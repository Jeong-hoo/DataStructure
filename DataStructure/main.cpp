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
	//	cout << " �Է��ϼ���  (0�� ����, -1�� pop) : ";
	//	cin >> input;

	//	cout << boolalpha;  // std::boolalpha�� 1,0���� ������ bool���� true, false string���� ��ȯ.
	//	if (input == 0)
	//		return 0;

	//	if (input == -1)
	//	{
	//		stack.Pop();
	//		cout << "Size After Pop : " << stack.GetSize() << endl;
	//	}
	//	else
	//	{
	//		// ������ �����ε� �����ָ� C#ó�� +�δ� �� �ȳ��´� �ƿ�
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
	//		cout << stack.Peek(i) << " "; // peek => index�� �迭 ����� ���ϸ� stack[i]�� return, �ƴϸ� -1 return
	//	}
	//	cout << endl << endl;
	//}
	// INT32.MAX ���� ũ�ų� INT32.MIN���� ���� ���� �Է��ϸ� WHILE���� �ݺ�.. ���� �����ϱ�
#pragma endregion stack
	
#pragma region queue
	
	cout << boolalpha;

	CircularQueue circularQueue; // SIZE�� 5�� �迭 ����

	int input;

	while (1)
	{
		cout << "���� �Է��ϼ��� (0�� Dequeue, -1�� ����) : ";
		cin >> input;

		if (input == -1)
			return 0;
		
		else if (input == 0)
		{
			bool dequeueResult = circularQueue.Dequeue() != -1;

			cout << "\t\t Dequeue ����� " << dequeueResult << " �Դϴ�. " << endl;
		}
		else
		{
			bool enqueueResult = circularQueue.Enqueue(input);
			
			cout << "Enqueue ����� " << enqueueResult << " �Դϴ�. " << endl;
		}
		
		int front = circularQueue.GetFrontIndex();
		int rear = circularQueue.GetRearIndex();
		// ť ��¿�
		cout << "\t\t\t\t\t  Front : " << front << "���� ������ �������� \t Rear : " << rear << "�� ����" << endl;

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
			cout << "ť�� �������. ";

			cout << endl << endl;
		
	}

#pragma endregion queue
}
