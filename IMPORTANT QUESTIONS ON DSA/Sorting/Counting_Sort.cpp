// Counting Sort
#include <bits/stdc++.h>
using namespace std;
void CountSort(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < k; i++)
    {
        count[i] = 0;
    } //  arr[]={1,4,4,1,0,1}  => arr[]={1,3,0,0,2};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            arr[index] = i;
            index++;
        }
    }
}
// efficient method
void countSort(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i < k; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
int main()
{
    int arr[] = {1, 4, 4, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, n, 5);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}