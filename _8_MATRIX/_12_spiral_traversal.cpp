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

void spiral_traversal(int **arr, int r, int c)
{
	int top = 0, left = 0, right = c - 1, bottom = r - 1;
	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)
			cout << arr[top][i] << " ";
		top++;
		for (int i = top; i <= bottom; i++)
			cout << arr[i][right] << " ";
		right--;
		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
				cout << arr[bottom][i] << " ";
			bottom--;
		}
		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
				cout << arr[i][left] << " ";
			left++;
		}
	}
}

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
			cout << "Enter the value for arr[" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	displayMatrix(arr, m, n);
	cout << endl;
	spiral_traversal(arr, m, n);
}
