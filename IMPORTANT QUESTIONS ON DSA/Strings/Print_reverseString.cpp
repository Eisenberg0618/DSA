// print reverse string
#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if (str.size() == 0)
        return;
    reverse(str.substr(1));
    // reverse(str.begin(),str.end());
    cout << str[0];
}
void reverse(char str[], int index, int n)
{
    if (index == n)
        return;
    char temp = str[index];
    reverse(str, index + 1, n);
    cout << temp;
}
int main()
{
    string a = "geeks for geeks";
    reverse(a);
    char a1[] = "geeks for geeks";
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a1, 0, n);
    return 0;
}