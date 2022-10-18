// Move to Zeroes to end
#include <bits/stdc++.h>
using namespace std;
// void moveZ(vector<int> &arr, int n)
// {
//     stable_partition(arr.begin(), arr.end(), [](int n)
//                      { return n != 0 });
// }
void MoveZ(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                    swap(arr[i], arr[j]);
            }
        }
    }
}
// efficeint method
void MoveZero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 0, 3, 0, 9, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    MoveZero(arr, n);
    printarray(arr, n);
    return 0;
}