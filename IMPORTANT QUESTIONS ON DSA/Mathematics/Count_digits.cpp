// count digits ex : 123 = 3 , 145 = 3
#include <bits/stdc++.h>
using namespace std;
int count_digits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n / 10;
        res++;
    }
    return res;
}
int main()
{
    int n = 1234;
    cout << count_digits(n);
}