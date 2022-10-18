// Stock buy and Sell
#include <bits/stdc++.h>
using namespace std;
// Efficent solution
vector<vector<int>> StockbuySell(vector<int> A, int n)
{
    vector<vector<int>> rV;
    vector<int> dummy;
    bool incr = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] < A[i + 1] && !incr)
        {
            dummy.push_back(i);
            incr = !incr;
        }
        else if (A[i] > A[i + 1] && incr)
        {
            incr = !incr;
            dummy.push_back(i);
            rV.push_back(dummy);
            dummy.clear();
        }
    }
    if (dummy.size() == 1)
    {
        dummy.push_back(n - 1);
        rV.push_back(dummy);
    }
    return rV;
}

// Naive method
int Maxprofit(int price[], int start, int end)
{
    if (end <= start)
        return 0;
    int curr_profit = 0;
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (price[j] > price[i])
            {
                curr_profit = price[j] - price[i] + Maxprofit(price, start, i - 1) + Maxprofit(price, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}
// Efficeint method
int Maxprofit1(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit += price[i] - price[i - 1];
        }
    }
    return profit;
}
int main()
{
    int arr[] = {1, 5, 3, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Maxprofit1(arr, n);
    return 0;
}