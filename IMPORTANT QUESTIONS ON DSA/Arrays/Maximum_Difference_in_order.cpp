// Maximum Difference in order
#include <bits/stdc++.h>
using namespace std;
// Naive method
int MaxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}

// efficent method update min value
int Maxdiff(int arr[], int n)
{
    int res = arr[1] - arr[0], minval = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minval);
        minval = min(minval, arr[i]);
    }
}
// Maximum Difference in an circular array
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << MaxDiff(arr, n);
    return 0;
}