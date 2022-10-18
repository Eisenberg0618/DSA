// Two pointer approach example
#include <bits/stdc++.h>
using namespace std;
bool TwoPointer1(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (arr[j] + arr[i] == x)
            {
                return true;
                break;
            }
        }
    }
    return false;
}
// efficeint method
bool TwoPointer(int arr[], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
            return true;
        else if (arr[i] + arr[j] > x)
            j = j - 1;
        else
            i = i + 1;
    }
    return false;
}
int main()
{
    int arr[] = {2, 5, 8, 12, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 17;
    int res = TwoPointer(arr, n, x);
    cout << res << endl;
    return 0;
}