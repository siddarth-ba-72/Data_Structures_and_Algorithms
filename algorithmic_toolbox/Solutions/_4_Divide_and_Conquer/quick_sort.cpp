#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
	int x = arr[low];
	int j = low;
	for (int i = low + 1; i <= high; i++)
	{
		if (arr[i] <= x)
		{
			j++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[low], arr[j]);
	return j;
}

// ? Quick Sort
void quickSort(int arr[], int low, int high)
{
	if (low >= high)
		return;
	int m = partition(arr, low, high);
	quickSort(arr, low, m - 1);
	quickSort(arr, m + 1, high);
}

void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	printArray(arr, n);
	cout << endl;
	quickSort(arr, 0, n - 1);
	printArray(arr, n);
}
