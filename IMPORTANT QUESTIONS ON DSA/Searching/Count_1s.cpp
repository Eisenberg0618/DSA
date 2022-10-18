// count 1s in Sorted array
#include <bits/stdc++.h>
using namespace std;
int Count1s(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
    }
    return count;
}
// recursive
int Countones(int arr[], int n)
{
    int l = 0, h = n - 1;

    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] == 0)
            l = m + 1;
        else
        {
            if (m == 0 || arr[m - 1] == 0)
                return (n - m);
            else
                h = m - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << Countones(arr, n);
    return 0;
}