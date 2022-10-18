// Check if array is sorted or not
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 31, 21};
    int n = 4;
    int res = isSorted(arr, n);
    cout << res << endl;

    return 0;
}