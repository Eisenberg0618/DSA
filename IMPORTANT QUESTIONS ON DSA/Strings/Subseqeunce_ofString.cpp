// Subseqeuence of string
#include <bits/stdc++.h>
using namespace std;
bool Subsequence(string s1, string s2, int n, int m)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
            j++;
    }
    return j == m;
}
// recursive method
bool isSub(string s1, string s2, int n, int m)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    if (s1[n - 1] == s2[m - 1])
        return isSub(s1, s2, n - 1, m - 1);
    else
        return isSub(s1, s2, n - 1, m);
}
int main()
{
    string s1 = "ABCDEF";
    string s2 = "ABD";
    int n = s1.length();
    int m = s2.length();
    int res = isSub(s1, s2, n, m);
    cout << res << endl;
    return 0;
}