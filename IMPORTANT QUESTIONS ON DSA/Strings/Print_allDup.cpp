// print all duplicates
#include <bits/stdc++.h>
using namespace std;
void printalldup(char str[], int n)
{
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[str[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > 1)
            cout << i.first << " ";
    }
}
int main()
{
    char str[] = "geeksforgeeks";
    int n = sizeof(str) / sizeof(str[0]);
    printalldup(str, n);
    return 0;
}