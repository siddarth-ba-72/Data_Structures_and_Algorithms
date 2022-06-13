#include <iostream>
#include <deque>
using namespace std;

// * Naive solution

int firstPetrolNaive(int pet[], int dist[], int n)
{
	for (int start = 0; start < n; start++)
	{
		int curr_petrol = 0;
		int end = start;
		while (true)
		{
			curr_petrol += (pet[end] - dist[end]);
			if (curr_petrol < 0)
				break;
			end = (end + 1) % n;
			if (end == start)
				return start + 1;
		}
	}
	return -1;
}
// * TC: O(n^2)
// * AS: O(1)

// * Optimized solution

int firstPetrolPump(int pet[], int dist[], int n)
{
	int start = 0;
	int curr_pet = 0, prev_pet = 0;
	for (int i = 0; i < n; i++)
	{
		curr_pet += (pet[i] - dist[i]);
		if (curr_pet < 0)
		{
			start = i + 1;
			prev_pet += curr_pet;
			curr_pet = 0;
		}
	}
	return (curr_pet + prev_pet) >= 0 ? start + 1 : -1;
}

int main()
{
	int n;
	cout << "n: ";
	cin >> n;

	int petrol[n];
	int distance[n];

	cout << "Petrol: ";
	for (int i = 0; i < n; i++)
		cin >> petrol[i];

	cout << "Distance: ";
	for (int i = 0; i < n; i++)
		cin >> distance[i];

	cout << "First petrol station: " << firstPetrolNaive(petrol, distance, n) << endl;
}
