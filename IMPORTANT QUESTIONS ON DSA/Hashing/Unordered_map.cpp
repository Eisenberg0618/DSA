// Unordered map is based on hashing (map is based is red-blood tree)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["nan"] = 30;
    m.insert({"ide", 45});
    m.insert({"ide", 3});
    m.insert({"courses", 15});
    for (auto it = m.begin(); it != m.end(); it++)
        cout << (it->first) << " " << it->second << endl;
    if (m.find("ide") != m.end())
        cout << " found" << endl;
    else
        cout << "Not found" << endl;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (it->first) << "," << (it->second) << endl;
    }
    if (m.count("ide") > 0)
        cout << "found";
    else
        cout << "Not found";
    cout << endl;
    cout << m.size() << endl;
    m.erase("ide");
    m.erase(m.begin());
    cout << m.size() << endl;
    m.erase(m.begin(), m.end());
    return 0;
}