// implementation using Linked list
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct Mystack
{
    Node *head;
    int size;
    Mystack()
    {
        head = NULL;
        size = 0;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop()
    {
        if (head == NULL)
            cout << "stack is empty" << endl;
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }
    int peek()
    {
        if (head == NULL)
            cout << "stack is empty" << endl;
        return head->data;
    }
    int size()
    {
        return size;
    }
    bool isEmpty()
    {
        return head == NULL;
    }
};
int main()
{
    Mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}