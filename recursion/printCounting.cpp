#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // make call to func with (n-1) parameter
    print(n - 1);
    // until base case not becoming true, it will not move to next line(print)

    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}