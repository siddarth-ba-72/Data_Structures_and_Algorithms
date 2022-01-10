#include <iostream>
using namespace std;

int main()
{
	int m = 3, n = 2;
	int **arr;
	arr = new int *[m]; // Array of pointers to rows
	// ? Now we go through each array in arr and allocate n elements to each array
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}
	// ? Now a 2-D array is created
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = i + j;
		}
		cout << endl;
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
