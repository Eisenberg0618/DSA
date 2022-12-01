#include <iostream>
using namespace std;
// class Stack
// {
// private:
//     static const int max = 100;
//     int arr[max];
//     int top;

// public:
//     Stack() { top = -1; }
//     bool isempty();
//     bool isfull();
//     int pop();
//     void push(int x);
// };
// bool Stack::isempty()
// {
//     if (top == -1)
//     {
//         return true;
//     }
//     return false;
// }
// bool Stack::isfull()
// {
//     if (top == max - 1)
//     {
//         return true;
//     }
//     return false;
// }
// int Stack::pop()
// {
//     if (isempty())
//     {
//         cout << "stack overflow";
//         abort();
//     }
//     int x = arr[top];
//     top--;
//     return x;
// }
// void Stack::push(int x)
// {
//     if (isfull())
//     {
//         cout << "stack overflow";
//         abort();
//     }
//     top++;
//     arr[top] = x;
// }
// class specialStack : public Stack
// {
//     Stack max;

// public:
//     int pop();
//     void push(int x);
//     int getmax();
// };
// void specialStack::push(int x)
// {
//     if (isempty() == true)
//     {
//         Stack::push(x);
//         max.push(x);
//     }
//     else
//     {
//         Stack::push(x);
//         int y = max.pop();
//         max.push(y);
//         if (x > y)
//         {
//             max.push(x);
//         }
//         else
//         {
//             max.push(y);
//         }
//     }
// }
// int specialStack::pop()
// {
//     int x = Stack::pop();
//     max.pop();
//     return x;
// }
// int specialStack::getmax()
// {
//     int x = max.pop();
//     max.push(x);
//     return x;
// }
// int main()
// {
//     specialStack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout << s.getmax() << endl;
//     s.push(5);
//     cout << s.getmax();
//     return 0;
// }
#include <bits/stdc++.h>
#include <stack>
class specialstack
{
    int min = -1;
    static const int demoval = 999;
    stack<int> st;

public:
    void getmin()
    {
        cout << "min is" << min << endl;
    }
    void push(int val)
    {
        if (st.empty() || val < min)
        {
            min = val;
        }
        st.push(val * demoval + min);
        cout << "pushed " << val << endl;
    }

    int pop()
    {
        if (st.empty())
        {
            cout << "stack underflow" << endl;
            return -1;
        }
        int val = st.top();
        st.pop();
        if (!st.empty())
        {
            min = st.top() % demoval;
        }
        else
        {
            min = -1;
        }
        cout << "poped " << val / demoval << endl;
        return val / demoval;
    }
    int peek()
    {
        return st.top() / demoval;
    }
};
int main()
{
    specialstack s;
    vector<int> arr = {3, 2, 6, 1, 8, 5, 5, 5, 5, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        s.push(arr[i]);
        s.getmin();
    }
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        s.pop();
        s.getmin();
    }
    return 0;
}