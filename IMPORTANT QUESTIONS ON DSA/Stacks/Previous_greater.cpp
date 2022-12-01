// previous greater element
#include <bits/stdc++.h>
using namespace std;
void PreviousGreat(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int j;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
                cout << arr[j] << " ";
            break;
        }
        if (j == -1)
            cout << -1;
    }
    return;
}
int main()
{
    int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    PreviousGreat(arr, n);
    return 0;
}