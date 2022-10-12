// josepus is that given a n number kill every kth person in that circle
#include <bits/stdc++.h>
using namespace std;
int Jos(int n, int k)
{
    if (n == 1)
        return 0;
    return (Jos(n - 1, k) + k) % n;
}
int myJos(int n, int k)
{
    return Jos(n, k) + 1;
}
int main()
{
    cout << myJos(5, 3);
    return 0;
}