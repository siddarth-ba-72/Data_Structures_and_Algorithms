#include <iostream>
#include <vector>
using namespace std;

void displayMatrix(int **arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void boundary_traversal(int **arr, int m, int n)
{
	if (m == 1)
		for (int i = 0; i < n; i++)
			cout << arr[0][i] << " ";
	else if (n == 1)
		for (int i = 0; i < m; i++)
			cout << arr[i][0] << " ";
	else
	{
		for (int i = 0; i < n; i++)
			cout << arr[0][i] << " ";
		for (int i = 1; i < m; i++)
			cout << arr[i][n - 1] << " ";
		for (int i = n - 2; i >= 0; i--)
			cout << arr[m - 1][i] << " ";
		for (int i = m - 2; i > 0; i--)
			cout << arr[i][0] << " ";
	}
}
// * TC: Theta(n + m)

int main()
{
	int m = 4, n = 4;
	int **arr;
	arr = new int *[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = i + j;
		}
	}
	displayMatrix(arr, m, n);
	cout << endl;
	boundary_traversal(arr, m, n);
}
