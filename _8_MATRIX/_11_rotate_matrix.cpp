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

// * Naive solution

void naive_rotate(int **arr, int m, int n)
{
	int **rotated;
	rotated = new int *[m];
	for (int i = 0; i < m; i++)
	{
		rotated[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			rotated[n - j - 1][i] = arr[i][j];
		}
	}
	displayMatrix(rotated, m, n);
}

// * Optimized solution

// void rotate_matrix(int **arr, int m, int n)
// {
// 	for (int i = 0; i < m; i++)
// 		for (int j = i + 1; i < n; j++)
// 			swap(arr[i][j], arr[j][i]);
// 	for (int i = 0; i < m; i++)
// 	{
// 		int low = 0, high = n - 1;
// 		while (low < high)
// 		{
// 			swap(arr[low][i], arr[high][i]);
// 			low++;
// 			high--;
// 		}
// 	}
// }

// * Effiicent solution

void rotate_by_90_degrees(int **arr, int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
}
// * TC: Theta(n^2)

int main()
{
	int m = 3, n = 3;
	int **arr;
	arr = new int *[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cout << "Enter element [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	displayMatrix(arr, m, n);
	cout << endl;
	rotate_by_90_degrees(arr, m, n);
}
