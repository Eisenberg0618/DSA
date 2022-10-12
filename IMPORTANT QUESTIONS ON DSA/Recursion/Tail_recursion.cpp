// Tail recursion is that it is the final call of recursion
#include <bits/stdc++.h>
using namespace std;
void tailrecu(int n) /// ex:
{
    if (n == 0)
        return;
    cout << n << " ";
    tailrecu(n - 1);
}
void tail1(int n, int k)
{
    if (n == 0)
        return; // makes faster and better
    cout << k << " ";
    tail1(n - 1, k + 1);
}
// factorial using tail recursion
int fact(int b, int k)
{
    if (b == 0 || b == 1)
        return k;
    return fact(b - 1, k * b);
}
int main()
{
    tail1(3, 1);
    return 0;
}
