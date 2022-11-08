// remove all duplicates
#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
char *removedup(char str[], int n)
{
    unordered_set<int> s(str, str + n - 1);
    int i = 0;
    for (auto x : s)
    {
        str[i++] = x;
    }
    str[i] = '\0';
    return str;
}
// using unordered_map
char *removedup(char str[], int n)
{
    unordered_map<char, int> exists;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (exists[str[i]] == 0)
        {
            str[index++] = str[i];
            exists[str[i]]++;
        }
    }
    return str;
}
int main()
{
    char str[] = "geeksforgeeks";
    int n = sizeof(str) / sizeof(str[0]);
    cout << removedup(str, n);
    return 0;
}