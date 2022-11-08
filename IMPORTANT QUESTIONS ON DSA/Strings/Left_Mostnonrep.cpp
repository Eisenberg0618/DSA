// Left Most non repeating element
#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int LeftMostNoN(string str)
{
    int visited[CHAR] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        visited[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (visited[str[i]] <= 1)
            return i;
    }
    return -1;
}
// efficient method

int main()
{
    string str = "geeksforgeeks";
    cout << LeftMostNoN(str);
    return 0;
}