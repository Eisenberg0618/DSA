// Sort Three type of array
#include <bits/stdc++.h>
using namespace std;
// naive method
void SortThree1(int arr[], int n)
{
    int temp[n], i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
            temp[i++] = arr[j];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 1)
        {
            temp[i++] = arr[j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 2)
        {
            temp[i++] = arr[j];
        }
    }
    for (int j = 0; j < n; i++)
    {
        arr[j] = temp[j];
    }
}
// efficient method
void SortThree(int arr[], int n)
{
    int l = 0, h = n - 1, m = 0;
    while (m <= h)
    {
        switch (arr[m])
        {
        case 0:
            swap(arr[l], arr[m]);
            l++;
            m++;
            break;
        case 1:
            m++;
            break;
        case 2:
            swap(arr[h], arr[m]);
            h--;
            break;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    SortThree(arr, n);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}