#include <bits/stdc++.h>
using namespace std;

void lastoccLTR(string str, int i, char ch, int ans)
{

    if (i >= str.size())
    {
        cout << ans << endl;
        return;
    }

    if (str[i] == ch)
    {
        ans = i;
    }

    lastoccLTR(str, i + 1, ch, ans);
}

void lastoccRTL(string str, int i, char ch)
{
    if (i == 0)
    {
        cout << -1;
        return;
    }

    if (str[i] == ch)
    {
        cout << i;
        return;
    }

    lastoccRTL(str, i - 1, ch);
}

int main()
{
    string s;
    cin >> s;
    int i = 0;
    char ch;
    cin >> ch;
    int ans = -1;

    // lastoccLTR(s, i, ch, ans);
    lastoccRTL(s, s.size() - 1, ch);

    return 0;
}