// frequency array elements
#include <bits/stdc++.h>
using namespace std;
void frequency(vector<int> &arr, int n, int p)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (int i = 0; i < n; i++)
        arr[i] = mp[i + 1];
}
int main()
{
    vector<int> arr = {3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p = 4;
    frequency(arr, n, p);
    // printarray(arr, n);
}