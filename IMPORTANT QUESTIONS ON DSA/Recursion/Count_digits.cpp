// Count digits using recurssion
#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if (n < 10)
        return 1;
    return 1 + fun(n / 10);
}
int main()
{
    cout << fun(999);
    return 0;
}