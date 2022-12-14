// Count of Distinct elements
#include <bits/stdc++.h>
using namespace std;
int CountDistinct(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            res++;
    }
    return res;
}
// efficient method
int Countdistinct(int arr[], int n)
{
    unordered_set<int> us;
    for (int i = 0; i < n; i++)
        us.insert(arr[i]);
    return us.size();
}
int main()
{
    int arr[] = {15, 12, 13, 12, 13, 13, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = CountDistinct(arr, n);
    cout << res << endl;
    return 0;
}