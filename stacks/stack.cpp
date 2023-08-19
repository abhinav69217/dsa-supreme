#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow";
        }
        else
        {
            top--;
        }
    }

    void getTop()
    {
        if (top == -1)
        {
            cout << "no element";
        }
        else
        {
            cout << arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);

    while (!s.isEmpty())
    {
        s.getTop();
        cout << endl;
        s.pop();
    }

    return 0;
}