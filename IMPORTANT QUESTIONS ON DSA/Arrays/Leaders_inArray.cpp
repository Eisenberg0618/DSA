// leaders in array
#include <bits/stdc++.h>
using namespace std;
void leaders1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag = false)
            cout << arr[i] << " ";
    }
}
void leaders(int arr[], int n)
{
    int curr_ldr = arr[n - 1];
    cout << arr[n - 1] << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_ldr < arr[i])
        {
            curr_ldr = arr[i];
            cout << curr_ldr << " ";
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    leaders(arr, n);
    // print(arr, n);
}