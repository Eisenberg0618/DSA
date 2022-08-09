// reverse array
#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int n)
{
    int l = 0, h = n - 1;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
}
void reversearray(vector<long, long> &arr, int n, int k)
{
    k = min(k, n);
    int temp = 0;
    while (temp <= n)
    {
        reverse(arr.begin() + temp, min(arr.begin() + temp + k, arr.end()));
        temp += k;
    }
}