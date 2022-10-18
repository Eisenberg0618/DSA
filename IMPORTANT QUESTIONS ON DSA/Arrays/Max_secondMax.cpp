// first maximum and second maximum
#include <bits/stdc++.h>
using namespace std;
vector<int> largestsecond(int arr[], int n)
{
    int max1 = INT_MIN, max2 = INT_MAX;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];
        else
            continue; // time O(n)   space O(1)
    }
    res.push_back(max1);
    res.push_back(max2);
    if (res.size() <= 1 || res[1] == INT_MIN)
        res[1] = -1;
    return res;
}
int largest(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i; // time O(n)  space O(1)
    }
    return res;
}
int second(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i; // time O(n)
        }
        else if (arr[i] < arr[largest])
        {
            if (res == -1 || arr[i] >= arr[largest])
                res = i;
        }
    }
    return res;
}
int secondlargest(int arr[], int n)
{
    int res = -1;
    int max1 = largest(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[max1]) // time O(n^2)
        {
            if (res == -1)
                res = i;
            else if (arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 3, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << largest(arr, n);
}