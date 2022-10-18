// Maximum consecutive flips
#include <bits/stdc++.h>
using namespace std;
void printGroups(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << " from " << i << " to ";
            else
                cout << i - 1;
        }
    }
    if (arr[n - 1] != arr[0])
        cout << n - 1 << endl;
}