// Search in Infinite sized array
#include <bits/stdc++.h>
using namespace std;
int Search(int arr[], int x)
{
    int i = 0;
    while (true)
    {
        if (arr[i] == x)
            return i;
        if (arr[i] > x)
            return -1;
        i++;
    }
}
// efficeint method
int binarySearch(int arr[], int l, int h, int x);
int Search(int arr[], int n, int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] < x)
        i = i * 2;
    if (arr[i] == x)
        return i;
    return binarySearch(arr, i / 2 + 1, i - 1, x);
}
int main()
{
    int arr[] = {1, 2, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    cout << Search(arr, x);
    return 0;
}