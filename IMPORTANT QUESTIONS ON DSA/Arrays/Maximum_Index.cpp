// Maximum index
#include <bits/stdc++.h>
using namespace std;
// simplem but inefficient
// int MaxIndexDiff(int arr[], int n)
// {
//     int Maxdiff=-1;
//     int i,j;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n-1;j>i;j--)
//         {
//             if(arr[j]>arr[i] && Maxdiff<(j-i)){
//                 Maxdiff=j-1;
//             }
//         }
//     }
//     return Maxdiff;
// }

// efficent method
int Maxindex(int arr[], int n)
{
    int rmax[n];
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }
    int maxDist = INT_MIN;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (rmax[j] >= arr[i])
        {
            maxDist = max(maxDist, j - i);
            j++;
        }
        else
            i++;
    }
    return maxDist;
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Maxindex(arr, n);
}