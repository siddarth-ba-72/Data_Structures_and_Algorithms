#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m = 3, n = 2;
	vector<vector<int>> arr;
	for (int i = 0; i < m; i++)
	{
		vector<int> v;
		for (int j = 0; j < n; j++)
		{
			v.push_back(i + j);
		}
		arr.push_back(v);
	}
	// ? Display the 2-D array
	cout << "The matrix is: " << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
