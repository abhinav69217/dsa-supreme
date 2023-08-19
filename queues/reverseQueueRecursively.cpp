#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }

    int temp = q.front();
    q.pop();

    reverse(q);
    q.push(temp);
}

void printQueue(queue<int> q)
{

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    cout << "Queue before Reversing: ";
    printQueue(q);

    reverse(q);

    cout << "Queue after Reversing: ";
    printQueue(q);
}