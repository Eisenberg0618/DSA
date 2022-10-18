// intersection of two sorted array
#include <bits/stdc++.h>
using namespace std;
void Intersection(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && a[i - 1] == a[i])
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
// efficeint method
void Intersection1(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i - 1] == a[i])
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
int main()
{
    int a[] = {1, 1, 3, 3};
    int b[] = {1, 1, 1, 1, 3, 3};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    Intersection1(a, b, m, n);

    return 0;
}