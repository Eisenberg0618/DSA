#include <bits/stdc++.h>
using namespace std;
int findmedian(int arr[], int n, int brr[], int m)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int i1 = (low + high) / 2;
        int i2 = (n + m + 1) / 2;
        int max1, min1;
        int max2, min2;
        if (i1 == 0)
            max1 = INT_MIN;
        else
            max1 = arr[i1 - 1];
        if (i2 == 0)
            max2 = INT_MIN;
        else
            max2 = brr[i2 - 1];
        if (i1 == n)
            min1 = INT_MAX;
        else
            min1 = arr[i1];
        if (i2 == m)
            min2 == INT_MAX;
        else
            min2 = brr[i2];
        if (max1 <= min2 && max2 <= min1)
        {
            if ((n + m) % 2 == 0)
                return (double)(max(max1, max2) + min(min1, min2)) / 2;
            else
                return (double)max(max1, max2);
        }
        if (max1 > min2)
            high = i1 - 1;
        if (max2 > min1)
            low = i1 + 1;
    }
}