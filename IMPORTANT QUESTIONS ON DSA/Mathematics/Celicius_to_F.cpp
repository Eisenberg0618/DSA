// Convert celicius to faharneit
#include <bits/stdc++.h>
using namespace std;
int ctf(int c)
{
    int f;
    f = (c * 9 / 5) + 32;
    return f;
}
int main()
{
    int c = 35;
    cout << ctf(c);
    return 0;
}