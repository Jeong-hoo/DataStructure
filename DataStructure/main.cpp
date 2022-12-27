#include "stack.h"

int main()
{
	Stack stack;

	int input;

	stack.Clear();
	while (1)
	{
		cout << " �Է��ϼ���  (0�� ����, -1�� pop) : ";
		cin >> input;

		cout << boolalpha;  // std::boolalpha�� 1,0���� ������ bool���� true, false string���� ��ȯ.
		if (input == 0)
			return 0;

		if (input == -1)
		{
			stack.Pop();
			cout << "Size After Pop : " << stack.GetSize() << endl;
		}
		else
		{
			// ������ �����ε� �����ָ� C#ó�� +�δ� �� �ȳ��´� �ƿ�
			cout << "IsEmpty ??  : " << stack.IsEmpty() << endl;
			cout << "Push result :" << stack.Push(input) << endl;
			cout << "Size After Push : " << stack.GetSize() << endl;
		}
	
		cout << "Is Stack Full ? : " << stack.IsFull() << endl;
		cout << endl;
		
		stack.Print();
	}
	// INT32.MAX ���� ũ�ų� INT32.MIN���� ���� ���� �Է��ϸ� WHILE���� �ݺ�.. ���� �����ϱ�
}