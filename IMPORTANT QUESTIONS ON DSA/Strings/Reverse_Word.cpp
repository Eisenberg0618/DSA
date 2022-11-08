// reverse the Words in string
#include <bits/stdc++.h>
using namespace std;
void ReverseWord(char str[], int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}
void reverseWord(char str[], int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (str[end] == ' ')
        {
            ReverseWord(str, start, end - 1);
            start = end + 1;
        }
    }
    ReverseWord(str, start, n - 1);
    ReverseWord(str, 0, n - 1);
}
int main()
{
    string str = "Welcome to jungle";

    int n = str.length();
    char s[n];
    strcpy(s, str.c_str());
    reverseWord(s, n);
    for (int i = 0; i < n; i++)
        cout << s[i];
    return 0;
}