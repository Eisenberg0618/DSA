// euclidean algorithm or gcd
#include <bits/stdc++.h>
using namespace std;
//
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return b;
}
// optimization
int ogcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int a = 24, b = 36;
    cout << ogcd(a, b);
    return 0;
}