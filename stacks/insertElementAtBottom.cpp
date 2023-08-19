#include <bits/stdc++.h>
using namespace std;

void insertElement(stack<int> &st, int &element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();
    insertElement(st, element);
    st.push(temp);
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
    insertElement(st, element);
    cout << endl;
    cout << "Stack After" << endl;
    printStack(st);
    return 0;
}