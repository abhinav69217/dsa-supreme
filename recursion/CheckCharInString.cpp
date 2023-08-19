#include <bits/stdc++.h>
using namespace std;

bool checkKey(string str, int i, int n, char key)
{
    // if (i >= n)
    // {
    //     return false;
    // }

    if (str[i] == '\0')
    {
        return false;
    }

    if (str[i] == key)
    {
        return true;
    }

    return checkKey(str, i + 1, n, key);
}

int main()
{
    string str = "abhinav";
    int size = str.length();
    char key = 'z';
    int i = 0;
    bool ans = checkKey(str, i, size, key);

    if (ans)
    {
        cout << "Key Present";
    }
    else
    {

        cout << "Key not Present";
    }
    return 0;
}