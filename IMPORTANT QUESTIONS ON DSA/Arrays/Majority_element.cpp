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
int Majority(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                curr++;
            }
        }
        if (curr > n / 2)
            return i;
    }
    return -1;
}
// efficient method
int Majority1(int arr[], int n)
{
    int res = 0, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            curr++;
        else
            curr--;
        if (curr == 0)
        {
            res = i;
            curr = 1;
        }
    }
    curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
            curr++;
    }
    if (curr <= n / 2)
        res = -1;
    return res;
}
int main()
{
    int arr[] = {8, 7, 6, 8, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Majority1(arr, n);
    return 0;
}