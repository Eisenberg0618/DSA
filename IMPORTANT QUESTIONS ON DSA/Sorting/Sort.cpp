// Sort in c++ stl
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Array
    int arr[] = {12, 2, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (auto x : arr)
        cout << x << " ";
    sort(arr, arr + n, greater<int>());
    cout << endl;
    for (int x : arr)
        cout << x << " ";

    // Vector
    cout << "Vector";
    vector<int> v = {10, 20, 4, 3};
    sort(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
        cout << x << " ";
    return 0;
}