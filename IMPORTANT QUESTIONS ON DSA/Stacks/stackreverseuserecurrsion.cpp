#include <iostream>
#include <stack>
using namespace std;
stack<char> s;
string ns;
void insert_bottom(char x)
{
    if (s.size() == 0)
    {
        s.push(x);
    }
    else
    {
        char a = s.top();
        s.pop();
        insert_bottom(x);
        s.push(a);
    }
}
void reverse()
{
    if (s.size() > 0)
    {
        char x = s.top();
        s.pop();
        reverse();
        insert_bottom(x);
    }
}
int main()
{
    s.push('1');
    s.push('2');
    s.push('3');

    s.push('4');
    cout << "original stack" << endl;
    cout << "1"
         << " "
         << "2"
         << " "
         << "3"
         << " "
         << "4" << endl;
    reverse();
    cout << "reversed stack" << endl;
    while (!s.empty())
    {
        char p = s.top();
        s.pop();
        ns += p;
    }
    cout << ns[3] << " " << ns[2] << " " << ns[1] << " " << ns[0] << endl;

    return 0;
}