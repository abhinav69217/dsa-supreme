#include <bits/stdc++.h>
using namespace std;
void printMiddle(stack<int> st, int &size)
{
    if (st.size() == ceil(size + 1) / 2)
    {
        cout << "Middle Element: " << st.top() << endl;
        return;
    }

    int temp = st.top();
    st.pop();
    printMiddle(st, size);
    st.push(temp);
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

    printMiddle(st, size);

    return 0;
}