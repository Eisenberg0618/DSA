// Maximum consective Ones
#include <bits/stdc++.h>
using namespace std;
// Naive method
int MaxconsectiveOnes(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
                curr++;
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}

// Efficent method
int MaxConsectiveOnes1(int arr[], int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            curr = 0;
        else
        {
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << MaxconsectiveOnes(arr, n);
    return 0;
}