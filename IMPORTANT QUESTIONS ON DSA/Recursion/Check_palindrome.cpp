// check palindrome by using recursion
#include <bits/stdc++.h>
using namespace std;
bool isPlaindrome(string str, int start, int end)
{
    if (start >= end)
        return true;
    return ((str[start] == str[end]) && isPlaindrome(str, start + 1, end - 1));
}
int main()
{
    string s = "ANA";
    cout << isPlaindrome(s, 0, s.length() - 1) ? "true" : "false";
    return 0;
}
