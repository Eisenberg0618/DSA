// check for prime  (primality test)
#include <bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
// effiecient method for large numbers
int isprime1(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2 && n == 3)
        return true;
    if (n % 2 == 0 && n % 3 == 0)
        return true;
    for (int i = 5; i < sqrt(n); i++)
        if (n % i == 0 || n + (i % 2) == 0)
            return false;
    return true;
}
int main()
{
    int n = 7;
    cout << isprime1(n);
    return 0;
}