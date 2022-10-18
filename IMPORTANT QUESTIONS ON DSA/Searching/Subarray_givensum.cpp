#include <bits/stdc++.h>
using namespace std;
vector<int> subarraysum(int arr[], int n, long long s)
{
    int l = 0, h = 0, sum = 0;
    while (l < n)
    {
        if (sum == s)
        {
            return {l + 1, h};
        }
        if (sum > s)
        {
            sum -= arr[l];
            l++;
        }
        if (sum < s)
        {
            sum += arr[h];
            h++;
        }
    }
    return {-1};
}
