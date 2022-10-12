// generate subset ex: AB= "","A","B"
#include <bits/stdc++.h>
using namespace std;
void generateSub(string str, string curr, int index)
{
    if (index == str.length())
    {
        cout << curr << " ";
        return;
    }
    generateSub(str, curr, index + 1);
    generateSub(str, curr + str[index], index + 1);
}
int main()
{
    string str = "ABC";
    generateSub(str, "", 0);
    return 0;
}