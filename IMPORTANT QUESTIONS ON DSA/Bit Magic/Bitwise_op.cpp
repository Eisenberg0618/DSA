// there are 6 bitwise operators
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 3, y = 6;
    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (x ^ y) << endl;
    // left and right shift operator ex:
    int n = 33;
    cout << (n >> 1) << endl; // right shift
    cout << (n >> 2) << endl;
    int a = 4;
    int z = n >> a;
    cout << z << endl;
    cout << (n << 1) << endl; // left shift
    // OR operator
    int b = 1;
    cout << (~b) << endl;
    b = 5;
    cout << (~b) << endl;
    return 0;
}