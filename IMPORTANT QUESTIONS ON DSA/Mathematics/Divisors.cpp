// find all the divisors
#include <bits/stdc++.h>
using namespace std;
void alldivisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != (n / i))
                cout << (n / i) << " ";
        }
    }
}
// effiecint method for sorted order
void alldivisors1(int n)
{
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
        for (int i = 1; i >= 1; i--)
            if (n % i == 0)
                cout << (n / i) << " ";
    }
}
int main()
{
    int n = 10;
    alldivisors1(n);
    return 0;
}