// peak element
#include <bits/stdc++.h>
using namespace std;
int PeakEle(int arr[], int n)
{
    int l = 0, h = n - 1;
    if (l > h)
        return 0;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (m == n - 1 || arr[m] < arr[m - 1])
            return arr[m - 1];
        if (arr[m] > arr[m - 1] && arr[m] > arr[m + 1])
            return arr[m];
        else if (arr[m] < arr[m - 1])
            l = m + 1;
        else
            h = m - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {5, 20, 40, 30, 20, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << PeakEle(arr, n);
    return 0;
}