#include <iostream>
using namespace std;
// int printNGE(int arr[], int n)
// {
//     int next;
//     for (int i = 0; i < n; i++)
//     {
//         next = -1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 next = arr[j];
//                 break;
//             }
//         }
//         cout << arr[i] << "-->" << next << endl;
//     }
// }
// int main()
// {
//     int arr[] = {11, 12, 21, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printNGE(arr, n);

//     return 0;
// }
// using stack
#include <stack>
void printNGE(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            continue;
        }
        while (s.empty() == false && s.top() < arr[i])
        {
            cout << s.top() << "-->" << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while (s.empty() == false)
    {
        cout << s.top() << "-->" << -1 << endl;
        s.pop();
    }
}
int main()
{
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}