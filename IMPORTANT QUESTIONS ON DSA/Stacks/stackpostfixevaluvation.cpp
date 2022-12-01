#include <bits/stdc++.h>
#include <stack>
using namespace std;
class Stack
{
public:
    int top;
    unsigned capacity;
    int *array;
};
Stack *createdstack(unsigned capacity)
{
    Stack *stack = new Stack();
    if (!stack)
    {
        return NULL;
    }
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = new int[(stack->capacity * sizeof(int))];
    if (!stack->array)
    {
        return NULL;
    }
    return stack;
}
int isempty(Stack *stack)
{
    return stack->array[stack->top];
}
int pop(Stack *stack)
{
    if (!isempty(stack))
    {
        return stack->array[stack->top--];
        return '@';
    }
}
void push(Stack *stack, int op)
{
    stack->array[++stack->top] = op;
}
int evaluatepostfix(char *exp)
{
    Stack *stack = createdstack(strlen(exp));
    int i;
    if (!strlen)
    {
        return -1;
    }
    for (i = 0; exp[i]; ++i)
    {
        if (exp[i] == ' ')
        {
            continue;
        }
        else if (isdigit(exp[i]))
        {
            int num = 0;
            while (isdigit(exp[i]))
            {
                num = num * 10 + (int)(exp[i] - '0');
                i++;
            }
            i--;
            push(stack, num);
        }
        else
        {
            int va11 = pop(stack);
            int va12 = pop(stack);
            switch (exp[i])
            {
            case '+':
                push(stack, va12 + va11);
                break;
            case '-':
                push(stack, va12 - va11);
                break;
            case '*':
                push(stack, va12 * va11);
                break;
            case '/':
                push(stack, va12 / va11);
                break;
            }
        }
    }
    return pop(stack);
}

int main()
{
    char exp[] = "100 200 + 2 / 5 * 7 +";
    cout << evaluatepostfix(exp);
    return 0;
}