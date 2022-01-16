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

void naive_transpose(int **arr, int m, int n)
{
	int **transpose = new int *[n];
	for (int i = 0; i < n; i++)
	{
		transpose[i] = new int[m];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			transpose[j][i] = arr[i][j];
		}
	}
	displayMatrix(transpose, n, m);
}

// * Optimized solution

void transpose_matrix(int **arr, int m, int n)
{
	if (m != n)
	{
		cout << "Not a square matrix" << endl;
		return;
	}
	for (int i = 0; i < m; i++)
		for (int j = i + 1; j < n; j++)
			swap(arr[i][j], arr[j][i]);
	displayMatrix(arr, m, n);
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
			cout << "Enter element [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	displayMatrix(arr, m, n);
	cout << endl;
	cout << "Transpose of matrix" << endl;
	transpose_matrix(arr, m, n);
	return 0;
}
