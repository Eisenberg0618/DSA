// Minimum difference in array
#include <bits/stdc++.h>
using namespace std;
int MinimumDiff(int arr[], int n)
{
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            res = min(res, abs(arr[i] - arr[j]));
        }
    }
    return res;
}
// efficient method
int MinDiff(int arr[], int n)
{
    sort(arr, arr + n);
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        res = min(res, arr[i] - arr[i - 1]);
    }
    return res;
}
int main()
{
    int arr[] = {1, 8, 12, 5, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << MinDiff(arr, n);
    return 0;
}
