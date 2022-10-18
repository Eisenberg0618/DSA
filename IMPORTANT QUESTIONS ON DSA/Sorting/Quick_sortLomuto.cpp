// Quick Sort Lomuto Partition algorithm uses Partition as complex and time is O(n^2)
#include <bits/stdc++.h>
using namespace std;
int Lomuto(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[i] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}
void Qsort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = Lomuto(arr, l, h);
        Qsort(arr, l, p - 1);
        Qsort(arr, p + 1, h);
    }
}
int main()
{
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Qsort(arr, 0, n - 1);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}