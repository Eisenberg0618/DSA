// maximum occuring element in string
#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
char maximumOcc(char *str)
{
    int count[ASCII_SIZE] = {0};
    int len = strlen(str);
    int max = 0;
    char res;
    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            res = str[i];
        }
    }
    return res;
}
int main()
{
    char str[] = "sample string";
    cout << "max occuring character is " << maximumOcc(str);
    return 0;
}