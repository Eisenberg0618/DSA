// Subarray with Zero Sum
#include <bits/stdc++.h>
using namespace std;
bool SubarrayZero(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            if (curr_sum == 0)
                return true;
        }
    }
    return false;
}
// efficient method
int SubarrayZero1(int arr[], int n)
{
    unordered_set<int> us;
    int prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (us.find(prefix_sum) != us.end())
            return 1;
        us.insert(arr[i]);
    }
    return 0;
}
int main()
{
    int arr[] = {4, -3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = SubarrayZero1(arr, n);
    cout << res << endl;
    return 0;
}