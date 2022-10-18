// Bubble sort is a Stable Sort algorithm
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }
    return;
}
// efficeint method
void BubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
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
    BubbleSort(arr, n);
    printarray(arr, n);
    return 0;
}