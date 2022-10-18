// Union of Two sorted arrays
#include <bits/stdc++.h>
using namespace std;
void Union(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int j = 0; j < n; j++)
    {
        c[j + m] = b[j];
    }
    sort(c, c + m + n);
    for (int i = 0; i < m + n; i++)
    {
        if (c[i - 1] != c[i])
            cout << c[i] << " ";
    }
    cout << endl;
}
// efficient method
void UnionOfarrays(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (i > 0 && a[i - 1] == a[i])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j - 1] == b[j])
        {
            j++;
            continue;
        }
        if (a[i] < b[i])
            cout << a[i++] << " ";
        else if (a[i] > b[j])
            cout << b[j++] << " ";
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (i == 0 || a[i] != a[i - 1])
            cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        if (i == 0 || b[j] != b[j - 1])
            cout << b[j] << " ";

        j++;
    }
}

int main()
{
    int a[] = {3, 5, 8};
    int b[] = {2, 8, 9, 10, 15};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    UnionOfarrays(a, b, m, n);

    return 0;
}