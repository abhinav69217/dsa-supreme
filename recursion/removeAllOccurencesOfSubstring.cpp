#include <bits/stdc++.h>
using namespace std;

string removeOccurences(string &s, string part)
{
    int partPosi = s.find(part);

    if (partPosi != string::npos)
    {
        string leftPart = s.substr(0, partPosi);
        string rightPart = s.substr((partPosi + part.size()), s.size());

        s = leftPart + rightPart;

        return removeOccurences(s, part);
    }
    else
    {
        return s;
    }
}

int main()
{

    string s = "daabcbaabcbc";
    string part = "abc";

    string ans = removeOccurences(s, part);
    cout << ans;
    return 0;
}