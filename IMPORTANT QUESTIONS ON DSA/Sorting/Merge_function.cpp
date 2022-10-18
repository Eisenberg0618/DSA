// Merge function for Merge sort
#include <bits/stdc++.h>
using namespace std;
void MergeFun(int a[], int l, int h, int n)
{
    int mid = (l + h) / 2;
    int left[n];
    int right[n];
    for (int i = 0; i <= mid; i++)
    {
        left[i] = a[i];
    }
    for (int i = mid + 1; i <= n; i++)
    {
        right[i] = a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
// efficient method
void mergeFun(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i];
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
    int a[] = {10, 15, 20, 40, 8, 11, 55};
    int n = sizeof(a) / sizeof(a[0]);
    mergeFun(a, 0, 3, 7);
    printarray(a, n);
    return 0;
}