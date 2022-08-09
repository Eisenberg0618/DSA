// insert at index
#include <bits/stdc++.h>
using namespace std;
void insertatindex(int arr[], int n, int idx, int x)
{
    for (int i = n - 1; i >= idx; i--)
        arr[i + 1] = arr[i];
    arr[idx] = x; // time O(n) space(1)
}