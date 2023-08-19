#include <bits/stdc++.h>
using namespace std;

// approach -> valid paranthesis
// operation on elements left in stack

int countRev(string s)
{
    if (s.size() & 1)
        return -1;

    int ans = 0;
    stack<char> st;
    for (auto ch : s)
    {
        if (ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();

        if (a == b)
        {
            ans += 1;
        }
        else
        {
            ans += 2;
        }
    }
    return ans;
}

int main()
{

    string s = "}{{}}{{{";
    int ans = countRev(s);
    cout << ans;

    return 0;
}