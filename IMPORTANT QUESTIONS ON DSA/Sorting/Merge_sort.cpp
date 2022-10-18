// merge sort algorithm is divide and conquer alorithm (stable sort) Theta(nlogn) , Merge as complex
#include <bits/stdc++.h>
using namespace std;
// merge two sorted arrays
void Mergesort(int a[], int b[], int n, int m)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i + m] = b[i];
    }
    sort(c, c + m + n);
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
}
// efficeint method
void MergeSort(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }
    while (i < m)
    {
        cout << a[i++] << " ";
    }
    while (j < n)
    {
        cout << b[j++] << " ";
    }
}
int main()
{
    int a[] = {10, 15, 20, 40};
    int b[] = {5, 6, 6, 10, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    MergeSort(a, b, n, m);
    return 0;
}