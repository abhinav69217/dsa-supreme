#include <bits/stdc++.h>
using namespace std;

string simplifyString(string &path)
{
    stack<string> st;
    int i = 0;
    while (i < path.size())
    {
        int start = i;
        int end = i + 1;
        while (end < path.size() && path[end] != '/')
        {
            end++;
        }
        string minPath = path.substr(start, end - start);
        i = end;

        if (minPath == "/" || minPath == "/.")
        {
            continue;
        }

        if (minPath != "/..")
        {
            st.push(minPath);
        }
        else if (!st.empty())
        {
            st.pop();
        }
    }

    string ans = st.empty() ? "/" : "";

    while (!st.empty())
    {
        ans = st.top() + ans;
        st.pop();
    }

    return ans;
}

int main()
{
    string path = "/a/./b/../../c/";
    cout << simplifyString(path);
    return 0;
}