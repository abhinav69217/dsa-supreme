#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &st, int target)
{

    if (st.empty())
    {
        st.push(target);
        return;
    }

    if (st.top() >= target)
    {
        st.push(target);
        return;
    }

    int tempTop = st.top();
    st.pop();
    insertSorted(st, target);
    st.push(tempTop);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int topElement = st.top();
    st.pop();
    sortStack(st);
    insertSorted(st, topElement);
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
    st.push(20);
    st.push(10);
    st.push(50);
    st.push(40);
    st.push(30);
    sortStack(st);
    printStack(st);

    return 0;
}