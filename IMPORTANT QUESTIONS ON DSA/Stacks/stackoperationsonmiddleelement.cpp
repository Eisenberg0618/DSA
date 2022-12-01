#include <bits/stdc++.h>
using namespace std;
class Stack
{
    struct node
    {
        int num;
        node *prev;
        node *next;
        node(int num)
        {
            this->num = num;
        }
    };
    node *head = NULL;
    node *mid = NULL;
    int size = 0;

public:
    void push(int data)
    {
        node *temp = new node(data);
        if (size == 0)
        {
            head = temp;
            mid = temp;
            size++;
            return;
        }
        head->next = temp;
        temp->prev = head;
        head = head->next;
        if (size % 2 == 1)
        {
            mid = mid->next;
        }
        size++;
    }
    void pop()
    {
        if (size != 0)
        {
            if (size == 1)
            {
                head = NULL;
                mid = NULL;
            }
            else
            {
                head = head->prev;
                head->next = NULL;
                if (size % 2 == 0)
                {
                    mid = mid->prev;
                }
            }
            size--;
        }
    }
    int findmiddle()
    {
        if (size == 0)
        {
            return -1;
        }
        return mid->num;
    }
    void deletemiddle()
    {
        if (size != 0)
        {
            if (size == 1)
            {
                head = NULL;
                mid == NULL;
            }
            else if (size == 2)
            {
                head = head->prev;
                mid = mid->prev;
                head->next = NULL;
            }
            else
            {
                mid->next->prev = mid->prev;
                mid->prev->next = mid->next;
                if (size % 2 == 0)
                {
                    mid = mid->prev;
                }
                else
                {
                    mid = mid->next;
                }
            }
            size--;
        }
    }
};
int main()
{
    Stack s;
    s.push(11);
    s.push(22);
    s.push(3);
    s.push(44);
    s.push(55);
    s.pop();
    cout << s.findmiddle() << endl;
    s.deletemiddle();
    cout << s.findmiddle() << endl;

    return 0;
}