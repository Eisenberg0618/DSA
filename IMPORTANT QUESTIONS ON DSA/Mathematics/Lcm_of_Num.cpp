// Lcm of numbers
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int Lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int a = 4, b = 6;
    cout << Lcm(a, b);
    return 0;
}