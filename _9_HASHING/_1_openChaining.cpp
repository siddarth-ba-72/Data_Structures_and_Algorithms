#include <iostream>
#include <list>
using namespace std;

struct myHash
{
    int BUCKET;
    list<int> *table;

    myHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }

    void insert(int n)
    {
        int i = n % BUCKET;
        table[i].push_back(n);
    }

    bool search(int n)
    {
        int i = n % BUCKET;
        for (auto x : table[i])
            if (x == n)
                return true;
        return false;
    }

    void remove(int n)
    {
        int i = n % BUCKET;
        table[i].remove(n);
    }
};

int main()
{
    myHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout << mh.search(10) << endl;
    mh.remove(15);
    cout << mh.search(15);
}
