// geometrical progression
#include <bits/stdc++.h>
using namespace std;
int Gp(int a, int b, int n)
{
    int res;
    res = a * pow(b, n - 1);
    return res;
}
int main()
{
    int a = 2, b = 3, n = 1;
    cout << Gp(a, b, n);
    return 0;
}