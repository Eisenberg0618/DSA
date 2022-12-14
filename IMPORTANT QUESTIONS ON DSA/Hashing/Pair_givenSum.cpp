// pair with given sum
#include <bits/stdc++.h>
using namespace std;
bool PairSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
}
// efficient method
int Pairsum(int arr[], int n, int sum)
{
    unordered_set<int> us;
    for (int i = 0; i < n; i++)
    {
        if (us.find(sum - arr[i]) != us.end())
            return 1;
        us.insert(arr[i]);
    }
    return 0;
}
int main()
{
    int arr[] = {3, 2, 8, 15, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 17;
    cout << Pairsum(arr, n, sum);
    return 0;
}