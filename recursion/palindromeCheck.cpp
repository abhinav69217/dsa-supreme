#include <bits/stdc++.h>
using namespace std;

bool palindrome(string &s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (s[start] != s[end])
    {
        return false;
    }
    cout << start << " " << end << endl;
    return palindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    int start = 0, end = s.size() - 1;
    bool ans = palindrome(s, start, end);
    if (ans)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}
