#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int TopElement = s.top();
    s.pop();
    insertAtBottom(s, target);
    s.push(TopElement);
}

void reverseStack(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int temp = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st, temp);
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    reverseStack(st);
    printStack(st);
    return 0;
}