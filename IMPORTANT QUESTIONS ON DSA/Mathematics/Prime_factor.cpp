// Print prime factor of a number
#include <bits/stdc++.h>
using namespace std;
void printPrime(int n)
{
    if (n <= 1)
        return;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1)
        cout << n << " ";
    cout << endl;
}
int main()
{
    int n = 10;
    printPrime(n);
    return 0;
}