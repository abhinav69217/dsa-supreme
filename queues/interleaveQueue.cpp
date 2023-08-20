#include <bits/stdc++.h>
using namespace std;
void printQueue(queue<int> q)
{

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void interLeaveQueue(queue<int> &q)
{
    int n = q.size();
    queue<int>
        temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp.push(q.front());
        q.pop();
    }

    while (!temp.empty())
    {
        q.push(temp.front());
        q.push(q.front());
        q.pop();
        temp.pop();
    }

    if (n & 1)
    {
        q.push(q.front());
        q.pop();
        return;
    }
}

int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    q.push(21);
    interLeaveQueue(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}