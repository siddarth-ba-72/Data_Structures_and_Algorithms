#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m = 3, n = 2;
	vector<int> arr[m];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i].push_back(i + j);
		}
	}
	// ? Display the 2-D array
	cout << "The matrix is: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
