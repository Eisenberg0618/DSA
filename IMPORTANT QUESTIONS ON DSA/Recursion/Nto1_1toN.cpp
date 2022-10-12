// print N to 1 and 1 to N
#include <bits/stdc++.h>
using namespace std;
void printnto1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printnto1(n - 1);
}
void print1ton(int a)
{
    if (a == 0)
        return;
    print1ton(a - 1);
    cout << a << endl;
}
int main()
{
    print1ton(5);
    return 0;
}