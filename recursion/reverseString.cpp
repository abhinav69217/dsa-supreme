#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int s, int e)
{
    // base case

    if (s == e)
    {
        cout << str << endl;
        return;
    }
    swap(str[s], str[e]);
    reverse(str, s + 1, e - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int start = 0, end = n - 1;

    reverse(s, start, end);

    return 0;
}