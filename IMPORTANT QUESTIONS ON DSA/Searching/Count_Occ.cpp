// count occurences in sorted array
#include <bits/stdc++.h>
using namespace std;
int CountOcc1(int arr[], int n, int x)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                if (arr[j] == x)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == true)
            count++;
    }
    return count;
}
// recursive
int CountOcc(int arr[], int l, int h, int x, int n)
{
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (x > arr[m])
            return CountOcc(arr, m + 1, h, x, n);
        else if (x < arr[m])
            return CountOcc(arr, l, m - 1, x, n);
        else
        {
            if (m == n - 1 || arr[m + 1] != arr[m])
                return m;
            else
                return CountOcc(arr, m + 1, h, x, n);
        }
    }
    return -1;
}
int countOcc(int arr[], int n, int x)
{
    int first = countOcc(arr, n, x);
    if (first == -1)
        return 0;
    else
        return CountOcc(arr, 0, n - 1, x, n) - first + 1;
}
int main()
{
    int arr[] = {10, 20, 20, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;
    cout << countOcc(arr, n, x);
    return 0;
}