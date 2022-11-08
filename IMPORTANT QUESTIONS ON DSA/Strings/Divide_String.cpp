// divide string in given equal parts
#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
void divide(string s, int n)
{
    if (s.length() % n != 0)
    {
        cout << "no possible to divide";
        return;
    }
    int parts = s.length() / n;
    int start = 0;
    while (start < s.length())
    {
        cout << s.substr(start, parts) << endl;
        start += parts;
    }
}
int main()
{
    string str = "a_simple_divide_string_quest";
    divide(str, 4);
    return 0;
}