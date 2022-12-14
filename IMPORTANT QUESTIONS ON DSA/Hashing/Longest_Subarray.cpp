// longest subarray with given sum
#include <bits/stdc++.h>
using namespace std;
int LongestSub(int arr[], int n, int sum)
{

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == sum)
                res = max(res, j - i + 1);
        }
    }
    return res;
}
// efficeint method
int LongestSub1(int arr[], int n, int sum)
{
    unordered_set<int> us;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (us.find(curr_sum - sum) != us.end())
            return 1;
        us.insert(curr_sum);
    }
    return 0;
}
int main()
{
    int arr[] = {5, 8, -4, 4, 9, -2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << LongestSub1(arr, n, 0);
    return 0;
}