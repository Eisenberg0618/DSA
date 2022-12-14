// Frequcency array
#include <bits/stdc++.h>
using namespace std;
void FrequencyArray(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    for (auto it = m.begin(); it != m.end(); it++)
        cout << (it->first) << " " << (it->second) << endl;
}
int main()
{
    int arr[] = {10, 12, 10, 15, 10, 20, 12, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    FrequencyArray(arr, n);
    return 0;
}