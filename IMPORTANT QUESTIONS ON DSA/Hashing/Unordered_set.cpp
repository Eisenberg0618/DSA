// Unordered set in c++ Stl
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(23);
    s.insert(34);
    for (auto x : s)
        cout << x << " ";
    cout << endl;
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;
    cout << s.size() << endl;
    s.clear();
    cout << s.size() << endl;
    s.insert(20);
    s.insert(15);
    s.insert(45);
    s.insert(22);
    cout << s.size() << endl;
    if (s.find(15) == s.end())
        cout << "No found";
    else
        cout << "found";
    cout << endl;
    cout << s.size() << endl;
    s.erase(15);
    cout << s.size() << endl;
    auto it = s.find(10);
    s.erase(it);
    cout << s.size() << endl;
    s.erase(s.begin(), s.end());
    return 0;
}