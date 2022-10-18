// Search in sorted rotated array
#include <bits/stdc++.h>
using namespace std;
int SortedRotated(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
// efficient method
int binarySearch(int arr[], int l, int h, int x, int n)
{

    if (l > h)
        return -1;
    int m = (l + h) / 2;
    while (l <= h)
    {
        if (arr[m] == x)
            return m;
        if (arr[l] < arr[m])
        {
            if (x >= arr[l] && x < arr[m])
                h = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (x > arr[m] && x <= arr[h])
                l = m + 1;
            else
                h = m - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    cout << binarySearch(arr, 0, n - 1, x, n);
    return 0;
}