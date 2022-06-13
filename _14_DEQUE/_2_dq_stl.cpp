#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq = {10, 20, 30}; // These elements are pushed to the front of the deque
	dq.push_front(1);
	dq.push_back(2);

	for (auto x : dq)
		cout << x << " ";
	cout << endl;
	cout << dq.front() << " " << dq.back() << endl;

	auto it = dq.begin();
	it++;
	dq.insert(it, 3);
	for (auto x : dq)
		cout << x << " ";
	cout << endl;

	dq.pop_front();
	for (auto x : dq)
		cout << x << " ";
	cout << endl;

	dq.pop_back();
	for (auto x : dq)
		cout << x << " ";
	cout << endl;

	cout

	return 0;
}
