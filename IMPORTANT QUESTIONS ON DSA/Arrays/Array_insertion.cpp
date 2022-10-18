// array insert at end
#include <bits/stdc++.h>
using namespace std;
// time O(1) space O(1)
int insertion(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
        arr[i + 1] = arr[i];
    arr[idx] = x;
    return (n + 1);
}
int main()
{
    int cap = 5, n = 3;
    int arr[5];
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 20;
    cout << "Before insertion ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int pos = 2, x = 7;
    n = insertion(arr, n, x, cap, pos);
    cout << "After insertion ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << insertion(arr, n, x, cap, pos);

    return 0;
}