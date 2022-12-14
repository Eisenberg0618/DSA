// Subarray with the given sum
#include <bits/stdc++.h>
using namespace std;
int SubarraySum(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == sum)
                return 1;
        }
    }
    return 0;
}
// efficient method
int SubarraySum1(int arr[], int n, int sum)
{
    unordered_set<int> us;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (curr_sum == sum)
            return 1;
        curr_sum += arr[i];
        if (us.find(curr_sum - sum) != us.end())
            return 1;
        us.insert(curr_sum);
    }
    return 0;
}
int main()
{
    int arr[] = {15, 2, 8, 10, -5, -8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << SubarraySum1(arr, n, 10);
    return 0;
}