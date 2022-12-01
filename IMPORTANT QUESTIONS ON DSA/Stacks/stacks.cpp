//stack in c++ stl
//stacks are the type of container adaptors with lifo(last in first out)
//stack uses an encapsulated object of either vector or deque or list(sequential container ) as its underlyng container
//container-it is a type of underlying container object.
#include<iostream>// inculde iostream header file or in our code to use its functions
#include<stack>//inculde stack header file in our code to use ts functions.
using namespace std;// inculde std namsepace in our code to use its classes witout calling it.
int main (){ // main function . the program logic should be added within this function.
    stack<int> stack;
    stack.push(23);
    stack.push(12);
    stack.push(45);
    stack.pop();
    while(!stack.empty()){
        cout<<" "<<stack.top();
        stack.pop();
    }
}