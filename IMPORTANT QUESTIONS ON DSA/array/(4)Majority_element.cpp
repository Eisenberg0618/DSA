// Majority elements
#include <bits/stdc++.h>
using namespace std;
int majority(int arr[], int n, int x, int y)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++; // time O(n)
    }
    int n1 = mp.find(x)->second;
    int n2 = mp.find(y)->second;
    if (n1 == n2)
        return min(x, y);
    else if (n1 > n2)
        return x;
    else
        return y;
}
