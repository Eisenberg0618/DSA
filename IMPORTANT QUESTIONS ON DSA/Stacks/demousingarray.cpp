#include <bits/stdc++.h> //lifo (last in first out) time complexcity push(),pop(),isempty(), and peek().
using namespace std;
#define max 1000
class Stack
{
    int top;

public:
    int a[max];
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isempty();
};
bool Stack::push(int x)
{
    if (top >= (max - 1))
    {
        cout << "stack overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << "pushed stack";
        return true;
    }
}
int Stack::pop()
{
    if (top < 0)
    {
        cout << "stack underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0)
    {
        cout << "stack underflow";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}
bool Stack::isempty()
{
    return (top < 0);
}
int main()
{
    class Stack s;
    s.push(19);
    s.push(2);
    s.push(12);
    cout << s.pop() << "popped from stack";
    while (!s.isempty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
}
//applications of stack  //there are two ways of implementation of stacks that are (using arrays,using linked list)
//balancing of symbols  and histogram ,infix to postfix ,tower of hanoi etc;