// print all prime number smaller than the given number
#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    if (n <= 1)
        return;
    bool isprime[n + 1];
    fill(isprime, isprime + n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i) // multiple of numbers
                isprime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
            cout << i << " ";
    }
}
int main()
{
    int n = 10;
    sieve(n);
    return 0;
}