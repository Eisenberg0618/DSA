// compute the power c(x,n) x=5 , n=2 => 5^2=25
#include <bits/stdc++.h>
using namespace std;
int computePower(int x, int n)
{
    int res = pow(x, n);
    return res;
}
// efficient method
int power(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = power(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

int main()
{
    int x = 2, n = 3;
    cout << power(x, n);
    return 0;
}