// Merge Sort Algorithm
#include <bits/stdc++.h>
using namespace std;
void MergeFun(int arr[], int l, int h, int n)
{
    int mid = (l + h) / 2;
    int left[n];
    int right[n];
    for (int i = 0; i <= mid; i++)
    {
        left[i] = arr[i];
    }
    for (int i = mid + 1; i <= n; i++)
    {
        right[i] = arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// efficeint method
void mergeFun(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i + 1];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
}
void Mergesort(int arr[], int l, int r)
{
    if (r > l)
    {
        int mid = l + (r - l) / 2;
        Mergesort(arr, l, mid);
        Mergesort(arr, mid + 1, r);
        mergeFun(arr, l, mid, r);
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 5, 30, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Mergesort(arr, 0, 4);
    printarray(arr, n);
    return 0;
}