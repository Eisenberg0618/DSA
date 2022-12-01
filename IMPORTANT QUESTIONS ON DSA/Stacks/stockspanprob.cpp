#include <iostream> //simple method
using namespace std;
// void calculator(int price[], int n, int S[])
// {
//     S[0] = 1;
//     for (int i = 1; i < n; i++)
//     {
//         S[i] = 1;
//         for (int j = i - 1; (j >= 0) && (price[i] >= price[j]); j--)
//             S[i]++;
//     }
// }
// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int price[] = {10, 4, 5, 90, 120, 80};
//     int n = sizeof(price) / sizeof(price[0]);
//     int S[n];
//     calculator(price, n, S);
//     printarray(S, n);
//     return 0;
// }
//use stack
#include <stack>
void calculatespan(int price[], int n, int S[])
{
    stack<int> st;
    st.push(0);
    S[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && price[st.top()] < price[i])
        {
            st.pop();
        }
        S[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int price[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(price) / sizeof(price[0]);
    int S[n];
    calculatespan(price, n, S);
    printarray(S, n);
}