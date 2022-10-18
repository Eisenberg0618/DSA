// largest element in an array
#include <bits/stdc++.h>
using namespace std;
int LargestEle(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            return i;
    }
    return -1;
}
// efficient approach
int Largestele(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = i;
    }
    return largest;
}
int secondLarge(int arr[], int n)
{
    int second = Largestele(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[second])
        {
            if (res == -1)
                res = i;
            else if (arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}
int main()
{
    int arr[] = {
        10,
        5,
        20, 7, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondLarge(arr, n);
    return 0;
}