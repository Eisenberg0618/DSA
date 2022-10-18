// kth smallest element
#include <bits/stdc++.h>
using namespace std;
int QuickSort(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}
int QuickHoare(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
void Qsort(int arr[], int l, int h)
{
begin:
    if (l < h)
    {
        int p = QuickHoare(arr, l, h);
        Qsort(arr, l, p);
        l = p + 1;
        goto begin;
    }
}
int KthSmall(int arr[], int n, int k)
{
    int l = 0, h = n - 1;
    Qsort(arr, l, h);
    return arr[k - 1];
}
int main()
{
    int arr[] = {30, 20, 5, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << KthSmall(arr, n, 4);
    return 0;
}