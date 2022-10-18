// Mean an Median
#include <bits/stdc++.h>
using namespace std;
int median(int arr[], int n)
{
    sort(arr, arr + n);
    if (n % 2 == 0)
        return (arr[(n / 2) - 1] + arr[(n / 2)]) / n;
    return arr[(n / 2)];
}
int mean(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n; // time O(n) , space O(1)
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 5; // sizeof(arr) / sizeof(arr[0]);
    cout << median(arr, n);
}