// index of last occurence
#include <bits/stdc++.h>
using namespace std;
// iterative
int indexofLast(int arr[], int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (x > arr[m])
            l = m + 1;
        else if (x < arr[m])
            h = m - 1;
        else
        {
            if (m == n - 1 || arr[m + 1] != arr[m])
                return m;
            else
                l = m + 1;
        }
    }
    return -1;
}
// recursive
int IndexOfLast(int arr[], int l, int h, int x, int n)
{
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (x > arr[m])
            return IndexOfLast(arr, m + 1, h, x, n);
        else if (x < arr[m])
            return IndexOfLast(arr, l, m - 1, x, n);
        else
        {
            if (m == n - 1 || arr[m + 1] != arr[m])
                return m;
            else
                return IndexOfLast(arr, m + 1, h, x, n);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 10, 20, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    int l = 0, h = n - 1;
    cout << IndexOfLast(arr, l, h, x, n);
    return 0;
}