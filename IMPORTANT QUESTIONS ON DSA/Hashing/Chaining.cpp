// Chaining is collision Handling technique
#include <bits/stdc++.h>
using namespace std;
struct myHash
{
    int Bukect;
    list<int> *table;
    myHash(int b)
    {
        Bukect = b;
        table = new list<int>[Bukect];
    }
    void insert(int k)
    {
        int i = k % Bukect;
        table[i].push_back(k);
    }
    bool search(int k)
    {
        int i = k % Bukect;
        for (auto x : table[i])
            if (x == k)
                return true;
        return false;
    }
    void remove(int k)
    {
        int i = k % Bukect;
        table[i].remove(k);
    }
};
int main()
{
    myHash mh(7);
    mh.insert(10);
    mh.insert(12);
    mh.insert(14);
    cout << mh.search(10) << endl;
    mh.remove(10);
    cout << mh.search(10) << endl;
    return 0;
}