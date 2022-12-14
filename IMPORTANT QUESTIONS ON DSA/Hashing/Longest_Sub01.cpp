// Longest subarray with equal 0s and 1s
#include <bits/stdc++.h>
using namespace std;
int Longest01(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int c0 = 0;
        int c1 = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
                c0++;
            else
                c1++;
            if (c0 == c1)
                res = max(res, j - i + 1);
        }
    }
    return res;
}
// efficeint method
int Longest01(int arr[], int n)
{
}
int main()
{
    int arr[] = {1, 0, 1, 1, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Longest01(arr, n);
    return 0;
}