// intersection of two unsorted arrays
#include <bits/stdc++.h>
using namespace std;
void Intersection1(int a[], int b[], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        if (i < m && a[i - 1] == a[i])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}
// efficient method
void Intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i < m && a[i - 1] == a[i])
            continue;
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}
// efficient method
int Intersection2(int a[], int b[], int m, int n)
{
    unordered_set<int> us;
    for (int i = 0; i < m; i++)
    {
        us.insert(a[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (us.find(b[i]) != us.end())
        {
            res++;
            us.erase(b[i]);
        }
    }
    return res;
}
int main()
{
    int a[] = {10, 20};
    int b[] = {20, 30};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    cout << Intersection2(a, b, m, n);
    return 0;
}