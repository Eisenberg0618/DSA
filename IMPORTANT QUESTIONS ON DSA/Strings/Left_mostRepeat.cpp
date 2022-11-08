// left most repeating character
#include <bits/stdc++.h>
using namespace std;
int leftMost(string str)
{
    int res = 0;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (str[j] == str[i])
            {
                return i;
            }
        }
    }
    return -1;
}
// efficient method
const int CHAR = 256;
int Leftmost(string str)
{
    int count[CHAR] = {0};
    for (int i = 0; i < str.length(); i++)
    { // stores the characters in count array
        count[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] > 1)
            return i;
    }
    return -1;
}
// other efficeint method
int LeftMostCh(string str)
{
    int findex[CHAR] = {0};
    fill(findex, findex + CHAR, -1); // filling the array with -1
    int res = INT_MAX;
    for (int i = 0; i, str.length(); i++)
    {
        int fi = findex[str[i]];
        if (fi == -1)
            findex[str[i]] = i;
        else
            res = min(res, fi);
    }
    return (res == INT_MAX);
}
// efficent method
int leftMostCh(string str)
{
    bool visited[CHAR];
    fill(visited, visited + CHAR, false);
    int res = -1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (visited[str[i]])
            res = i;
        else
            visited[str[i]] = true;
    }
    return res;
}
int main()
{
    string str = "geeksforgeeks";
    cout << Leftmost(str) << " ";
    return 0;
}