#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char CurrentTop = st.top();
                if (CurrentTop == '(' && ch == ')')
                {
                    st.pop();
                }
                else if (CurrentTop == '{' && ch == '}')
                {
                    st.pop();
                }
                else if (CurrentTop == '[' && ch == ']')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin >> s;
    bool ans = isValid(s);
    if (ans)
    {
        cout << "Valid";
    }
    else
    {
        cout << "Not Valid";
    }
    return 0;
}