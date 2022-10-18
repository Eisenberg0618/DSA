// frequency array elements
#include <bits/stdc++.h>
using namespace std;
void frequency(vector<int> &arr, int n, int p)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (int i = 0; i < n; i++)
        arr[i] = mp[i + 1];
}
// Naive method sorted array.
void PrintFreq(int arr[], int n)
{
    int res = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            res++;
            i++;
        }
        cout << arr[i - 1] << " " << res << endl;
        i++;
        res = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
        cout << arr[n - 1] + " " + 1;
}
void printarray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 10, 20, 30, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    PrintFreq(arr, n);
}