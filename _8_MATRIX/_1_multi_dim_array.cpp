#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	cout << "Rows: ";
	cin >> m;
	cout << "Columns: ";
	cin >> n;
	int arr[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter element arr[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> arr[i][j];
		}
		cout << endl;
	}

	cout << "The matrix is: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int brr[][2] = {
		{1, 2},
		{3, 4},
		{5, 6}};
	cout << "The matrix is: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << brr[i][j] << " ";
		}
		cout << endl;
	}
}