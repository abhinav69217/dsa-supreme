#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "aabc";
    string ans = "";
    int freq[26] = {0};

    queue<char> q;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        q.push(ch);
        freq[ch - 'a']++;
    }

    while (!q.empty())
    {
        if (freq[q.front() - 'a'] > 1)
        {
            q.pop();
        }
        else
        {
            ans += q.front();
            break;
        }
    }

    if (q.empty())
    {
        ans += "#";
    }

    cout << ans << endl;

    return 0;
}
