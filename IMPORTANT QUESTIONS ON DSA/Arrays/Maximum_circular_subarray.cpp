// Maximum Circular Subarray    skipped
#include <bits/stdc++.h>
using namespace std;
// Naive method
int maxCircular(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_sum = arr[i];
        int curr_max = arr[i];
        for (int j = 1; j < n; j++)
        {
            int idx = (i + j) % n;
            curr_sum += arr[idx];
            curr_max = max(curr_max, curr_sum);
        }
        res = max(res, curr_max);
    }
    return res;
}

// Efficient Method
int normalMax(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]); // kadaen's algorithm
        res = max(res, maxEnding);
    }
    return res;
}
int overallmax(int arr[], int n)
{
    int max_normal = normalMax(arr, n);
    if (max_normal < 0)
        return max_normal;
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMax(arr, n);
    return max(max_circular, max_normal);
}