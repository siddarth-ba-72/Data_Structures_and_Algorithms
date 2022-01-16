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

void searchElem(int **arr, int m, int n, int key)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == key)
				cout << "Found at (" << i << ", " << j << ")" << endl;
		}
	}
}
// * TC: O(n^2)

// * Optimized solution

void search_element(int **arr, int m, int n, int k)
{
	int i = 0, j = n - 1;
	bool found = false;
	while (i < m && j >= 0)
	{
		if (arr[i][j] == k)
		{
			cout << "Found at (" << i << ", " << j << ")" << endl;
			found = true;
			return;
		}
		else if (arr[i][j] > k)
			j--;
		else
			i++;
	}
	if (!found)
		cout << "Not found" << endl;
}
// * TC: O(n + m)

int main()
{
	int m = 3, n = 4;
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
	int k;
	cout << "Enter the element to be searched: ";
	cin >> k;
	search_element(arr, m, n, k);
}
