// quadratic equation roots
#include <bits/stdc++.h>
using namespace std;
int findroots(int a, int b, int c)
{
    if (a == 0)
        return 0;
    int d = b * b - 4 * a * c;
    double sqv = sqrt(d);
    if (d > 0)
    {
        cout << -b + sqv << -b - sqv;
    }
    else if (d == 0)
        cout << b / (2 * a);
    else
        cout << b / (2 * a) << " +i " << sqv / (2 * a) << "\n"
             << b / (2 * a) << "-i " << sqv / (2 * a);
}
int main()
{
    int a = 1, b = -7, c = 12;
    cout << findroots(a, b, c);
    return 0;
}