// Pattering Searching using Naive approach
#include <bits/stdc++.h>
using namespace std;
void PatternSearch(string txt1, string pat1)
{
    int n = txt1.length(), m = pat1.length();
    for (int i = 0; i <= (n - m); i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat1[j] != txt1[i + j])
                break;
        }
        if (j == m)
            cout << i << " ";
    }
}
// improved Naive approach
void Patternsearch(string txt, string pat)
{
    int n = txt.length(), m = pat.length();
    for (int i = 0; i <= (n - m); i++)
    {
        int j;
        for (int j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
                break;
        }
        if (j == m)
            cout << i << " ";
        if (j == 0)
        {
            i++;
        }
        else
        {
            i = (i + j);
        }
    }
}
int main()
{
    string txt = "ABCABCD";
    string pat = "ABCD";
    Patternsearch(txt, pat);
    return 0;
}