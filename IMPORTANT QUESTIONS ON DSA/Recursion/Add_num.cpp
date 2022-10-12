// Add numbers using recursion
#include <bits/stdc++.h>
using namespace std;
int addNum(int n)
{
    if (n < 10)
        return n;
    return addNum(n / 10) + n % 10;
}
int main()
{
    cout << addNum(253);
    return 0;
}