// Count inversion means if arr[i]>arr[j] and i<j
#include <bits/stdc++.h>
using namespace std;
int CountInversion(int a[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j] && i < j)
                res++;
        }
    }
    return res;
}
// efficeint method
int CountInversion1(int a[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j + m] = a[j];
    }
    int res = 0, i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            cout << left[i++] << " ";
        else
        {
            cout << right[j++] << " ";
            res += n1 - i;
        }
    }
    while (i < n1)
    {
        cout << left[i++] << " ";
    }
    while (j < n2)
    {
        cout << right[j++] << " ";
    }
    return res;
}
int CountInv(int arr[], int l, int r)
{
    int res = 0;
    if (r > l)
    {
        int mid = (r + l) / 2;
        res += CountInv(arr, l, mid);
        res += CountInv(arr, mid + 1, r);
        res += CountInversion1(arr, l, mid, r);
    }
    return res;
}
int main()
{
    int a[] = {40, 30, 20, 10};
    int n = sizeof(a) / sizeof(a[0]);
    cout << CountInv(a, 0, n - 1);
    return 0;
}