#include <iostream>
#include <deque>
using namespace std;

struct MinMax
{
	deque<int> d;

	void insertMin(int x)
	{
		d.push_front(x);
	}

	void insertMax(int x)
	{
		d.push_back(x);
	}

	int getMin()
	{
		return d.front();
	}

	int getMax()
	{
		return d.back();
	}

	int extractMin()
	{
		int x = d.front();
		d.pop_front();
		return x;
	}

	int extractMax()
	{
		int x = d.back();
		d.pop_back();
		return x;
	}

	void display()
	{
		for (int i = 0; i < d.size(); i++)
		{
			cout << d[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	MinMax mnx;

	mnx.insertMin(5);
	mnx.insertMin(3);
	mnx.insertMin(2);

	mnx.display();

	mnx.insertMax(10);
	mnx.insertMax(20);
	mnx.insertMax(30);

	mnx.display();

	cout << "Min: " << mnx.getMin() << endl;
	cout << "Max: " << mnx.getMax() << endl;

	cout << "Extracted Min: " << mnx.extractMin() << endl;
	cout << "Extracted Max: " << mnx.extractMax() << endl;
}
