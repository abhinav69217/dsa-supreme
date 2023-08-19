#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q, int k)
{

    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    for (int j = 0; j < q.size() - k; j++)
    {
        q.push(q.front());
        q.pop();
    }
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

    reverse(q, 10);

    cout << "Queue after Reversing: ";
    printQueue(q);
}