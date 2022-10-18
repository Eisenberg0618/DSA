// Sort Two Type of array
#include <bits/stdc++.h>
using namespace std;
void SortType(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[i++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[i++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
void Hoare(int arr[], int l, int h)
{
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[i] >= 0);
        if (i >= j)
            return;
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int arr[] = {-12, 10, -15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    Hoare(arr, 0, n - 1);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}