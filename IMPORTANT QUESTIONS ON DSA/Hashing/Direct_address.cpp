// performing search,insert and delete operations in O(1) time  Direct Address Table
// only for keys having small values.
#include <bits/stdc++.h>
using namespace std;
struct Dat
{
    int Table[1000] = {0};
    void insert(int i)
    {
        Table[i] = 1;
    }
    void del(int i)
    {
        Table[i] = 0;
    }
    int search(int i)
    {
        return Table[i];
    }
};
int main()
{
    Dat dat;
    dat.insert(10);
    dat.insert(20);
    cout << dat.search(10) << endl;
    cout << dat.search(20) << endl;
    dat.del(10);
    cout << dat.search(10);
    return 0;
}