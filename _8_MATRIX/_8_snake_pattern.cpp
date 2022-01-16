#include <iostream>
#include <vector>
using namespace std;

void normal_2d_array(int **arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void print_snake_pattern(int **arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0)
			{
				cout << arr[i][j] << " ";
			}
			else
			{
				cout << arr[i][n - j - 1] << " ";
			}
		}
	}
}

int main()
{
	int m = 3, n = 2;
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
	cout << "Normal" << endl;
	normal_2d_array(arr, m, n);
	cout << "Snake Pattern" << endl;
	print_snake_pattern(arr, m, n);
	cout << endl;
}
