#include <bits/stdc++.h>
using namespace std;

string decode(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ']')
        {
            string temp;
            while (!st.empty() && st.top() != '[')
            {
                temp = st.top() + temp; // adding in nonReverse Order
                st.pop();
            }
            st.pop(); //'['
            string num;

            while (!st.empty() && isdigit(st.top()))
            {
                num = st.top() + num;
                st.pop();
            }
            int number = stoi(num);

            string repeat;
            for (int j = 0; j < number; j++)
            {
                repeat += temp;
            }
            for (char c : repeat)
            {
                st.push(c);
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    string res;
    while (!st.empty())
    {
        res = st.top() + res;
        st.pop();
    }
    return res;
}

int main()
{
    // 3[a]2[bc]
    string s = "2[abc]3[cd]ef";
    cout << decode(s);

    return 0;
}
