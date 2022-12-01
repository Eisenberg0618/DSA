#include <bits/stdc++.h>
using namespace std;
// class Stack
// {
// public:
//     int top;
//     unsigned capacity;
//     char *array;
// };
// Stack *createdstack(unsigned capacity)
// {
//     Stack *stack = new Stack();
//     stack->top = -1;
//     stack->capacity = capacity;
//     stack->array = new char[(stack->capacity * sizeof(char))];
//     return stack;
// }
// int isfull(Stack *stack)
// {
//     return stack->top == stack->capacity - 1;
// }
// int isempty(Stack *stack)
// {
//     return stack->top == -1;
// }
// char pop(Stack *stack)
// {
//     if (!isempty(stack))
//     {
//         return -1;
//     }
//     return stack->array[stack->top--];
// }
// int push(Stack *stack, char item)
// {
//     if (!isfull(stack))
//     {
//         return;
//     }
//     return stack->array[++stack->top] = item;
// }
// void reverse(char *exp)
// {
//     int n = strlen(exp);
//     Stack *stack = createdstack(n);
//     for (int i = 0; i < n; i++)
//     {
//         push(stack, exp[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         exp[i] = pop(stack);
//     }
// }

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(char str[])
{
    int n = strlen(str), i;
    for (int i = 0; i < n / 2; i++)
    {
        swap(&str[i], &str[n - i - 1]);
    }
}
int main()
{
    char str[] = "geeksquiz";
    reverse(str);
    cout << "reversed string is" << str;
    // reverse(exp);
    // cout << "reversed string is" << exp;
    return 0;
}