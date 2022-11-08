#include <bits/stdc++.h>
using namespace std;
static int mycompare(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}
void sort(const char *arr[], int n)
{
    qsort(arr, n, sizeof(const char *), mycompare);
}
int main()
{
    const char *arr[] = {"geeksforgeeks", "geeksquiz", "clanguage"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    cout << "given array is ";
    for (int i = 0; i < n; i++)
    {
        cout << i << "," << arr[i];
    }
    cout << "\n";
    sort(arr, n);
    cout << "after sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << i << "," << arr[i];
    }
    cout << "\n";
    return 0;
}