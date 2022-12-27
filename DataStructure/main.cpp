#include "stack.h"

int main()
{
	Stack stack;

	int input;

	stack.Clear();
	while (1)
	{
		cout << " 입력하세요  (0은 종료, -1은 pop) : ";
		cin >> input;

		cout << boolalpha;  // std::boolalpha는 1,0으로 나오는 bool값을 true, false string으로 변환.
		if (input == 0)
			return 0;

		if (input == -1)
		{
			stack.Pop();
			cout << "Size After Pop : " << stack.GetSize() << endl;
		}
		else
		{
			// 연산자 오버로딩 안해주면 C#처럼 +로는 값 안나온다 아예
			cout << "IsEmpty ??  : " << stack.IsEmpty() << endl;
			cout << "Push result :" << stack.Push(input) << endl;
			cout << "Size After Push : " << stack.GetSize() << endl;
		}
	
		cout << "Is Stack Full ? : " << stack.IsFull() << endl;
		cout << endl;
		
		stack.Print();
	}
	// INT32.MAX 보다 크거나 INT32.MIN보다 작은 값을 입력하면 WHILE문이 반복.. 무슨 오류일까
}