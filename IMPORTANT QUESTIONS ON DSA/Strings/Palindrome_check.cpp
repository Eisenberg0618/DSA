// Palindrome check in string
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string str)
{
    string rev = str;
    reverse(str.begin(), str.end());
    return (rev == str);
}
// efficient method
bool palindromeCheck(string str1)
{
    int begin = 0;
    int end = str1.length() - 1;
    while (begin < end)
    {
        if (str1[begin] != str1[end])
            return false;
        begin++;
        end--;
    }
    return true;
}
int main()
{
    string str1 = "gfg";
    int res = palindromeCheck(str1);
    cout << res << endl;
    return 0;
}