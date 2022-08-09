// left rotate by one
#include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < 0; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
}
// reversal method of left rotate by D places
void reverse(int arr[], int l, int h)
{
    while (l < h)
    {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
}
void leftRotatebyDplaces(int arr[], int d, int n)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
// Efficent method
void leftRotatebyDplaces(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
}
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        leftRotatebyDplaces(arr, n);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
}
