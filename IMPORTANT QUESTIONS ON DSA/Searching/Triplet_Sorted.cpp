// Triplet in sorted array
#include <bits/stdc++.h>
using namespace std;
bool TwoPointer(int arr[], int n, int x)
{

    int l, r;
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        l = i + 1;
        r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == x)
            {
                cout << arr[i] << arr[l] << arr[r];
                return true;
            }
            else if (arr[i] + arr[l] + arr[r] < x)
                l++;
            else
                r--;
        }
    }
    return false;
}
int main()
{
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 32;
    int res = TwoPointer(arr, n, x);
    cout << res << endl;
    return 0;
}