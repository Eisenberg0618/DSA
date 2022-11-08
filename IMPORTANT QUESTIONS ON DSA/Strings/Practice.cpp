#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
bool palindrome(string str)
{
    int begin = 0;
    int end = str.length() - 1;
    while (begin < end)
    {
        if (str[begin] != str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}
char maximumOcc(char str[]){
    int count[ASCII_SIZE]={0};
    int len=strlen(str);
    int max=0;
    char res;
    for(int i=0;i<len;i++)
    {
        count[str[i]]++;
        if(max<count[str[i]]){
            max=count[str[i]];
            res=str[i];
        }
    }
    return res;
}
int main()
{
    string str = "geeksforgeeks";
    int res = palindrome(str);
    cout << res;
    return 0;
}