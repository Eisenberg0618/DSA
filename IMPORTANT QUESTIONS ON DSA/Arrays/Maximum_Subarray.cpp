// Maximum subarray Sum  (kadane's algorithm)
#include <bits/stdc++.h>
using namespace std;
// Naive method
int Maxsum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

// Efficent method
int Maxsum1(int arr[], int n)
{
    int res = arr[0];
    int maxEnd = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnd = max(maxEnd + arr[i], arr[i]);
        res = max(res, maxEnd);
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Maxsum1(arr, n);

    return 0;
}