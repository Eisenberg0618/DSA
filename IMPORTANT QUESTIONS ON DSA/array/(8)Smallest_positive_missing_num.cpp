// Smallest positive missing number
#include <bits/stdc++.h>
using namespace std;
int smallestPosveMissingNum(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 1; i <= n + 1; i++)
    {
        if (mp[i] == 0)
            return i;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << smallestPosveMissingNum(arr, n);
}