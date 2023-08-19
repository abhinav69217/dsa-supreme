#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    int size;
    int *arr;
    int front, rear;

    MyQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Overflow" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (rear == 0 && front == 0)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    void getFront()
    {
        if (rear == 0 && front == 0)
        {
            cout << "Queue is empty";
        }
        else
        {
            cout << "Front Element is->" << arr[front] << endl;
        }
    }

    void isEmpty()
    {
        if (rear == front)
        {
            cout << "Empty Queue" << endl;
        }
        else
        {
            cout << "Not Empty" << endl;
        }
    }

    void getSize()
    {
        cout << rear - front << endl;
    }
};

int main()
{

    MyQueue q(10);

    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.getSize();

    q.pop();
    q.getSize();
    q.getFront();

    return 0;
}