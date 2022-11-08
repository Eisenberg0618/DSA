// check for anagram
#include <bits/stdc++.h>
using namespace std;
bool Anagram(string &s1, string &s2)
{
    int n = s1.length(), m = s2.length();
    if (n != m)
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return (s1 == s2);
}
// efficeint method
const int CHAR = 256;
bool Anagram1(string s1, string s2)
{
    int n = s1.length(), m = s2.length();
    if (n != m)
        return false;
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string s1 = "aab";
    string s2 = "bab";
    if (Anagram(s1, s2))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    return 0;
}