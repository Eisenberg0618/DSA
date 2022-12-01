#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    stack<int> s1, s2;
    void enqueue(int x)
    { // enqueue costly
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int dequeue()
    {
        if (s1.empty())
        {
            cout << "q is empty ";
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        return x;
    }
};
struct Queue1
{
    stack<int> s1, s2;
    void enqueue(int x)
    {
        s1.push(x);
    }
    int dequeue()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "queue is empty";
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
};
int main()
{

    return 0;
}