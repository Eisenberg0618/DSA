// implementation using two stacks
#include <bits/stdc++.h>
using namespace std;
struct Twostacks
{
    int *arr;
    int cap;
    int top1;
    int top2;
    Twostacks(int n)
    {
        cap = n;
        arr = new int[cap];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }
    void push1(int x)
    {
        if (top1 > 0)
        {

            top1--;
            arr[top1] = x;
        }
        else
        {
            cout << "stack overflow"
                 << "by element" << x << endl;
            return;
        }
    }
    void push2(int x)
    {
        if (top2 < cap - 1)
        {

            top2++;
            arr[top2] = x;
        }
        else
        {
            cout << "stack overflow"
                 << "by element " << x << endl;
            return;
        }
    }
    int pop1()
    {
        if (top1 <= cap / 2)
        {
            int x = arr[top1];
            top1++;
            return x;
        }
        else
        {
            cout << "stack underflow" << endl;
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 >= cap / 2 + 1)
        {
            int x = arr[top2];
            top2--;
            return x;
        }
        else
        {
            cout << "stack Overflow" << endl;
            exit(1);
        }
    }
};
// efficeint method
struct TwoStacks
{
    int *arr;
    int cap;
    int top1, top2;
    TwoStacks(int n)
    {
        cap = n;
        arr = new int[cap];
        top1 = -1;
        top2 = cap;
    }
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "stack overflow" << endl;
            exit(1);
        }
    }
    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "stack overflow" << endl;
            exit(1);
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "stack underflow" << endl;
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 < cap)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout << "stack underflow" << endl;
            exit(1);
        }
    }
};
int main()
{
    Twostacks ts(5);
    ts.push1(5);
    ts.push1(10);
    ts.push1(20);
    ts.push1(30);
    cout << "popped element from stack 1 is : " << ts.pop1() << endl;
    ts.push2(40);
    cout << "popped element from stack 2 is : " << ts.pop2() << endl;
    return 0;
}