#include <bits/stdc++.h>
using namespace std;
#define MAX 20

// ? Median in row-wise sorted matrix
int getMedian(int arr[][MAX], int r, int c)
{
	int min = arr[0][0];
	int max = arr[0][c - 1];
	for (int i = 0; i < r; i++)
	{
		if (arr[i][0] < min)
			min = arr[i][0];
		if (arr[i][c - 1] > max)
			max = arr[i][c - 1];
	}
	int med_pos = (r + c + 1) / 2;
	while (min < max)
	{
		int mid = (min + max) / 2;
		int midPos = 0;
		for (int i = 0; i < r; i++)
			midPos = upper_bound(arr[i], arr[i] + c, mid) - arr[i];
		if (midPos < med_pos)
			min = mid + 1;
		else
			max = mid;
	}
	return min;
}

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

int main()
{
	int m = 3, n = 4;
	int arr[MAX][MAX] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	cout << getMedian(arr, m, n) << endl;

	return 0;
}
