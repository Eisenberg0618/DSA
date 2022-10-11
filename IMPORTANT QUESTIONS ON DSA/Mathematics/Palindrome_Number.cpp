// Palindrome of a number 1221 is a palindrome and 1234 is not a palindrome
#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int id = temp % 10;
        rev = id;
        temp = temp / 10;
    }
    return rev == n;
}
int main()
{
    int n = 1221;
    cout << palindrome(n);
    return 0;
}