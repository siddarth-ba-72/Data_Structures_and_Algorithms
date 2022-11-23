#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); ++it)
        cout << (*it) << " ";
    cout << endl;

    cout << "size: " << s.size() << endl;
    s.clear();
    cout << "size: " << s.size() << endl;

    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);

    if (s.find(15) == s.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    s.erase(15);
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << (*it) << " ";
    cout << endl;
    cout << "size: " << s.size() << endl;

    auto it = s.find(10);
    s.erase(it);
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << (*it) << " ";
    cout << endl;
    cout << "size: " << s.size() << endl;
}
