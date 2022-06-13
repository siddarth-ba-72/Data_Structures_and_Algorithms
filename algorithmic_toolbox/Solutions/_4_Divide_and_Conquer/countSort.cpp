#include <iostream>
using namespace std;

void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

// ? Function to sort an array using Count Sort
void countSort(int A[], int size)
{
	int count[10] = {0};

	for (auto i = 0; i < size; i++)
		count[A[i]]++;

	for (auto i = 1; i < 10; i++)
		count[i] += count[i - 1];

	int output[size];
	for (auto i = size - 1; i >= 0; i--)
	{
		output[count[A[i]] - 1] = A[i];
		count[A[i]]--;
	}

	for (auto i = 0; i < size; i++)
		A[i] = output[i];
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
	countSort(arr, n);
	printArray(arr, n);

	return 0;
}
