// array deletion
#include <bits/stdc++.h>
using namespace std;
int deleteEle(int arr[], int n, int x)
{
    int i=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }
    if (i == n)
        return n;
    for (int j = i; j < n - 1; j++)
    {
        arr[j + 1] = arr[j];
    }
    return n - 1;
}
int main()
{
    int arr[] = {1, 3, 8, 12, 5, 6};
    int n = 6;
    int x = 12;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    n = deleteEle(arr, n, x);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}