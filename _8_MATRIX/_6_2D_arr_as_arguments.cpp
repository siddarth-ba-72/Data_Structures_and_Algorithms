#include <iostream>
#include <vector>
using namespace std;

// ? In C++ we can only pass the matrix of size 3 * 2 max.
// ? To handle this problem we use different ways to pass the matrix as arguments.

// ? (c-STYLE)

// ? Using Double Pointers
void printer_1(int **arr, int m, int n)
{
	arr = new int *[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = i + j;
		}
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
}

// ? Using Array of Pointers
void printer_2(int *brr[], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		brr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			brr[i][j] = i + j;
		}
	}
	cout << "The matrix is: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << brr[i][j] << " ";
		}
		cout << endl;
	}
}

// ? (c++-STYLE)

// ? Uisng array of vectors
void printer_3(vector<int> crr[], int m)
{
	cout << "The matrix is: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < crr[i].size(); j++)
		{
			cout << crr[i][j] << " ";
		}
		cout << endl;
	}
}

// ? Using vector of vectors
void printer_4(vector<vector<int>> drr)
{
	for (int i = 0; i < drr.size(); i++)
	{
		for (int j = 0; j < drr[i].size(); j++)
		{
			drr[i][j] = i + j;
		}
	}
	cout << "The matrix is: " << endl;
	for (int i = 0; i < drr.size(); i++)
	{
		for (int j = 0; j < drr[i].size(); j++)
		{
			cout << drr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int m = 3, n = 2;

	// * Using Double Pointers
	int **arr;
	printer_1(arr, m, n);
	cout << endl;

	// * Using Array of Pointers
	int *brr[m];
	printer_2(brr, m, n);
	cout << endl;

	// * Using Array of Vectors
	vector<int> crr[m];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			crr[i][j] = i + j;
		}
	}
	printer_3(crr, m);
	cout << endl;

	// * Using Vector of Vectors
	vector<vector<int>> drr;
	printer_4(drr);
	cout << endl;

	return 0;
}
