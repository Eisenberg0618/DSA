// Selection Sort is a stable sort
#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_val = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_val])
                min_val = j;
        }
        swap(arr[i], arr[min_val]);
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
    int arr[] = {2, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    printarray(arr, n);
    return 0;
}