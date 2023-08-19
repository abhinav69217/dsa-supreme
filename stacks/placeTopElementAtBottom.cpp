#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int topElement)
{
    if (st.empty())
    {
        st.push(topElement);
        return;
    }

    int currentTop = st.top();
    st.pop();
    solve(st, topElement);
    st.push(currentTop);
}

void insertAtBottom(stack<int> &s)
{
    if (s.empty())
    {
        cout << "Stack Empty" << endl;
        return;
    }

    int TopElement = s.top();
    s.pop();

    solve(s, TopElement);
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
    st.push(60);

    int size = st.size();
    int element = 0;
    cout << "Stack Before" << endl;
    printStack(st);
    cout << endl;
    insertAtBottom(st);
    cout << endl;
    cout << "Stack After" << endl;
    printStack(st);
    return 0;
}