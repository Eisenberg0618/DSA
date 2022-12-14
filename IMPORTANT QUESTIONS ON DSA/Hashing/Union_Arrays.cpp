// Union of two unsorted arrays
#include <bits/stdc++.h>
using namespace std;
int UnionArrays(int a[], int b[], int m, int n)
{
    unordered_set<int> us1;
    for (int i = 0; i < m; i++)
    {
        us1.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        us1.insert(b[i]);
    }
    return us1.size();
}
int main()
{
    int a[] = {2, 3, 8, 3, 5, 6};
    int b[] = {4, 8, 3, 6, 1};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    cout << UnionArrays(a, b, m, n);
    return 0;
}