// index of first occurence in sorted
#include <bits/stdc++.h>
using namespace std;
int Indx1st(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
// recursive
int Ind1st(int arr[], int l, int h, int x)
{
    if (l > h)
        return 0;
    int m = (l + h) / 2;
    if (x > arr[m])
        return Ind1st(arr, m + 1, h, x);
    else if (x < arr[m])
        return Ind1st(arr, l, m - 1, x);
    else
    {
        if (m == 0 || arr[m - 1] != arr[m])
            return m;
        else
            return Ind1st(arr, l, m - 1, x);
    }
}
// iterative
int IndI1st(int arr[], int l, int h, int x)
{
    if (l > h)
        return 0;
    int m = (l + h) / 2;
    if (x > arr[m])
        l = m + 1;
    else if (x < arr[m])
        h = m - 1;
    else
    {
        if (m == 0 || arr[m - 1] != arr[m])
            return m;
        else
            h = m - 1;
    }
}
int main()
{
    int arr[] = {5, 10, 10, 15, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;
    cout << IndI1st(arr, 0, n - 1, x);
    return 0;
}