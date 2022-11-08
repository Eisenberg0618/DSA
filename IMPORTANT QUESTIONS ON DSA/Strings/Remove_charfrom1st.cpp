// remove char from first string which are present in second string
#include <bits/stdc++.h>
using namespace std;
string removefirst(string str1, string str2)
{
    for (auto i : str2)
    {
        while (find(str1.begin(), str1.end(), i) != str1.end())
        {
            auto it = find(str1.begin(), str1.end(), i);
            str1.erase(it);
        }
    }
    return str1;
}
int main()
{
    string str1, str2;
    str1 = "geeksforgeeks";
    str2 = "mask";
    cout << removefirst(str1, str2);
    return 0;
}