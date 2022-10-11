// Sum under modulo
#include <bits/stdc++.h>
using namespace std;
int sumUnderMod(int a, int b)
{
    int M = (int)pow(10, 9) + 7;
    return ((a % M) + (b % M)) % M;
}
int main()
{
    return 0;
}