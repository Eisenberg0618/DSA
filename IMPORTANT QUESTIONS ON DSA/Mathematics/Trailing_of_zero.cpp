// Trailing of zeroes ex : n=5 then o/p is 1 i.e. 120
#include <bits/stdc++.h>
using namespace std;
int zero_trai(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
        res = res + (n / i);
    return res;
}
int main()
{
    int n = 5;
    cout << zero_trai(n);
    return 0;
}