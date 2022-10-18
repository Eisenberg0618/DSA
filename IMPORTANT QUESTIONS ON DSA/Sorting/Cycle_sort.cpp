// Cycle sort
#include <bits/stdc++.h>
using namespace std;
// Naive method
void CycleSort(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
                count = j;
                swap(arr[i], arr[count]);
            }
        }
    }
}
// efficien method for distinct elements
void CycleSort(int arr[], int n)
{
    for (int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
        {
            if (arr[i] < item)
                pos++;
        }
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                    pos++;
            }
            swap(item, arr[pos]);
        }
    }
}
int main()
{
    int arr[] = {20, 40, 50, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    CycleSort(arr, n);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}