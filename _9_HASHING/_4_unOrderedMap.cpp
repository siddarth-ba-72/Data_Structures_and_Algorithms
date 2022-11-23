#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> mp;
    mp["ai"] = 220;
    mp["ml"] = 270;
    mp.insert({"Data Analysis", 240});

    for (auto x : mp)
        cout << x.first << ": " << x.second << endl;

    if (mp.find("ml") != mp.end())
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << ": " << it->second << endl;

    return 0;
}
