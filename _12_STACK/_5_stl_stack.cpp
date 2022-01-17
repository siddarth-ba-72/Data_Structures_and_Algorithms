#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> stk;

	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);

	while (!stk.empty())
	{
		cout << stk.top() << endl;
		stk.pop();
	}

	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);

	cout << "Size = %d\n"
		 << stk.size() << endl;

	cout << "Top = %d\n"
		 << stk.top() << endl;

	return 0;
}
