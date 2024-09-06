#include <iostream>
#define max 10
using namespace std;

template <class T>
class Stack
{
private:
    T stk[max];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(T data)
    {
        if (top == max - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            stk[top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Data being deleted is " << stk[top] << endl;
            top--;
        }
    }
    void display()
    {
        for (int i = top;i>=0;i--)
        {
            cout<<"Stack ["<<i<<"] ="<<stk[i]<<endl;
        }
    }
};

int main()
{
    Stack<char>s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.display();
    s.pop();
    s.display();
    return 0;
}