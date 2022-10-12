// parctice problems of recurssion
#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if (n == 0)
        return;
    cout << n << endl; // o/p : 3 2 1 1 2 3
    fun(n - 1);
    cout << n << endl;
}
int func(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + func(n / 2);
}
void func1(int n)
{
    if (n == 0)
        return;
    func1(n / 2);
    cout << (n % 2) << endl;
}
int main()
{
    func1(7);
    return 0;
}