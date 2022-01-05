#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Point
{
    int x, y;
};

bool myComp(Point p1, Point p2)
{
    return p1.x < p2.x;
}

int main()
{
    // * Sorting array
    int arr[] = {10, 5, 7, 2};
    sort(arr, arr + 4);

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    // * Sorting vector
    vector<int> vect = {10, 5, 7, 2};
    sort(vect.begin(), vect.end());

    for (int x : vect)
        cout << x << " ";

    sort(vect.begin(), vect.end(), greater<int>()); // * descending order

    // * Own Structure
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, myComp);
}
// * TC: O(nlogn(n))
