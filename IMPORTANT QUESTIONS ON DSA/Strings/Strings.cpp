// Strings in c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "gfg"; // initalize string using "char"
    cout << str << endl;
    cout << sizeof(str) << endl; // size of the String

    char str6[] = {'n', 'a', 'n', 'd', 'i', 's', 'h'}; // other way of initalizing
    cout << str6 << endl;
    // the compiler always initalize '\0' at the end of the string

    char str7[] = {'n', 'a', 'n', '\0'};
    cout << str7 << endl;

    char s10[] = "abc";
    char s20[] = "bcd";
    int res = strcmp(s10, s20); // compare the strings
    if (res > 0)
        cout << "Greater" << endl;
    else if (res == 0)
        cout << "Same" << endl;
    else
        cout << "smaller" << endl;

    char s11[] = "gfg";
    char s21[] = "nan";
    int res1 = strcmp(s11, s21); // compare the strings
    if (res1 > 0)
        cout << "Greater" << endl;
    else if (res1 == 0)
        cout << "Same" << endl;
    else
        cout << "smaller" << endl;

    char s12[] = "bcd";
    char s22[] = "bcd";
    int res2 = strcmp(s12, s22); // compare the strings
    if (res2 > 0)
        cout << "Greater" << endl;
    else if (res2 == 0)
        cout << "Same" << endl;
    else
        cout << "smaller" << endl;

    char str8[5];
    strcpy(str8, "nan"); // string copy
    cout << str8;

    string str1 = "nandish";
    cout << str1.length() << endl;
    str1 = str1 + "xyz";
    cout << str1 << " ";
    cout << str1.substr(1, 3) << " ";
    cout << str1.find("dish") << " ";

    string str11;
    cout << "Enter your name ";
    cin >> str11;
    cout << "\nyour name is " << str11 << endl;

    string str2;
    cout << "Enter your name ";
    getline(cin, str2, 'a');
    cout << "\nyour name is " << str2 << endl;

    string str3;
    cout << "Enter your name ";
    getline(cin, str3);
    cout << "\nyour name is " << str3 << endl;

    string str4 = "nandish";
    for (int i = 0; i < str4.length(); i++)
    {
        cout << str4[i] << " ";
    }
    cout << endl;
    for (char x : str4)
        cout << x;
    return 0;
}