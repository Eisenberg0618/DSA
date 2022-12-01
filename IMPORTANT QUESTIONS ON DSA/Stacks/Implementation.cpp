// Implementation of stack using array
#include <bits/stdc++.h>
using namespace std;
struct Mystack
{
    int *arr;
    int cap;
    int top;
    Mystack(int c)
    {
        cap = c;
        top = -1;
        arr = new int[cap];
    }
    void push(int x)
    {
        if (top == cap - 1)
            cout << "stack is full" << endl;
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
            cout << "Stack is empty" << endl;
        top--;
        return arr[top];
    }
    int peek()
    {
        if (top == -1)
            cout << "stack is empty" << endl;
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return top == -1;
    }
};
struct MyStack
{
    vector<int> v;
    void push(int x)
    {
        return v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    int isEmpty()
    {
        return v.empty();
    }
};
int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}