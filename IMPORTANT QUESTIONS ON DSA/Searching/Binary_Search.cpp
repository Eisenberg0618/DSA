// Binary search iterative and recursive
#include <bits/stdc++.h>
using namespace std;
int Bsearch1(int arr[], int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] == x)
            return m;
        else if (arr[m] > x)
            h = m - 1;
        else
            l = m + 1;
    }
    return -1;
}
// recursive
int Bsearch(int arr[], int l, int h, int x)
{

    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] == x)
            return m;
        else if (arr[m] > x)
            return Bsearch(arr, l, m - 1, x);
        else
            return Bsearch(arr, m + 1, h, x);
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int x = 20;
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, h = n - 1;
    cout << Bsearch(arr, l, h, x);
    return 0;
}