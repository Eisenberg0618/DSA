// Nautral number sum
#include <bits/stdc++.h>
using namespace std;
int nautralSum(int n)
{
    if (n == 0)
        return 0;
    return n + nautralSum(n - 1);
}
int main()
{
    cout << nautralSum(2);
    return 0;
}