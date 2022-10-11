// factorial of a number 2!=2, 5!=120
#include <bits/stdc++.h>
using namespace std;
// iterative method
int factorial(int n)
{
    int res = 1;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
// recursive method
int fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n = 5;
    cout << fact(n);
    return 0;
}